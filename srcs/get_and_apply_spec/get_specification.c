/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_specification.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:22:59 by abarot            #+#    #+#             */
/*   Updated: 2020/01/20 18:06:53 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_initialyse_spec(t_spec *spec)
{
	spec->type = ERROR;
	spec->zero_less_flag = NO_FLAG_ZERO_LESS;
	spec-> space_plus_flag = NO_FLAG_SPACE_PLUS;
	spec->hashtag_flag = 0;
	spec->width = 0;
	spec->precision = 0;
	spec->size = 0;
}

void	ft_get_type(const char *str, t_spec *spec)
{
	int 	i_str;

	i_str = 0;
	while (str[i_str] && spec->type == ERROR)
	{
		(str[i_str] == 'c') ? spec->type = CHAR : 0;
		(str[i_str] == 'i' || str[i_str] == 'd') ? spec->type = SIGNED_INT : 0;
		(str[i_str] == 'X') ? spec->type = CAP_HEXADEC : 0;
		(str[i_str] == 'x') ? spec->type = HEXADEC : 0;
		(str[i_str] == 'p') ? spec->type = ADDRESS : 0;
		(str[i_str] == 'u') ? spec->type = UNSIGNED_INT : 0;
		(str[i_str] == '%') ? spec->type = PERC : 0;
		(str[i_str] == 's') ? spec->type = STRING : 0;
		(str[i_str] == 'f') ? spec->type = FLOAT : 0;
		i_str++;
	}
}

void	ft_get_flags(const char *str, t_spec *spec)
{
	int i_str;

	i_str = 0;
	while (!ft_is_printf_type(str[i_str]) && str[i_str] && str[i_str] != '.')
	{
		if (str[i_str] == '0')
			(spec->zero_less_flag != LESS) ? spec->zero_less_flag = ZERO : 0;
		if (str[i_str] == '-')
			spec->zero_less_flag = LESS;
		if (str[i_str] == '+')
			spec-> space_plus_flag = PLUS;
		if (str[i_str] == ' ')
			(!spec->space_plus_flag) ? spec-> space_plus_flag = SPACE : 0;
		if (str[i_str] == '#')
			spec-> hashtag_flag = 1;
		while (ft_isdigit(str[i_str]))
			i_str++;
		if (str[i_str] && str[i_str] != '.' && !ft_is_printf_type(str[i_str]))
			i_str++;
	}
}

void	ft_get_width(const char *str, va_list lst, t_spec *spec)
{
	int i_str;

	i_str = 0;
	while (str[i_str] && str[i_str] != '.' && !ft_is_printf_type(str[i_str]))
	{
		if (str[i_str] == '*')
		{
			while (str[i_str] == '*')
			{
				spec->width = va_arg(lst, int);
				if (spec->width < 0)
				{
					spec->zero_less_flag = LESS;
					spec->width = -(spec->width);
				}
				i_str++;
			}
		}
		else if (ft_isdigit(str[i_str]))
		{	
			spec->width = ft_atoi(str + i_str);
			while (ft_isdigit(str[i_str]))
				i_str++;
		}
		else
			i_str++;
	}
}

void ft_get_precision_and_size(const char *str, va_list arg_lst, t_spec *spec)
{
	int i_str;

	i_str = 0;
	while (str[i_str] && !ft_is_printf_type(str[i_str]))
	{
		if (str[i_str] == '.')
		{
			i_str++;
			spec->precision = 1;
			while (str[i_str] == '*')
			{
				spec->size = va_arg(arg_lst, int);
				if (spec->size < 0)
				{
					spec->zero_less_flag = LESS;
					spec->width = -(spec->size);
					spec->precision = 0;
				}
				i_str++;
			}
			if (ft_isdigit(str[i_str]))
				spec->size = ft_atoi(str + i_str);
			else if (str[i_str] == '-')
			{
				spec->zero_less_flag = LESS;
				spec->width = spec->size;
				spec->precision = 0;
			}
			else if (str[i_str] != '.' && str[i_str] != '-')
				break ;
		}
		else
			i_str++;
	}
}

void	ft_get_arg_as_a_string(va_list lst, t_spec *spec)
{
	(spec->type == CHAR) ? spec->arg_as_a_string = ft_char_to_string(va_arg(lst, int)) : 0;
	(spec->type == STRING) ? spec->arg_as_a_string = ft_strdup(va_arg(lst, char *)) : 0;
	(spec->type == SIGNED_INT) ? spec->arg_as_a_string = ft_itoa(va_arg(lst, int)) : 0;
	(spec->type == UNSIGNED_INT) ? spec->arg_as_a_string = ft_utoa(va_arg(lst, unsigned int)) : 0;
	(spec->type == CAP_HEXADEC) ? spec->arg_as_a_string = ft_toupper_string(ft_hextoa(va_arg(lst, unsigned int))) : 0;
	(spec->type == HEXADEC) ? spec->arg_as_a_string = ft_hextoa(va_arg(lst, unsigned int)) : 0;
	(spec->type == ADDRESS) ? spec->arg_as_a_string = ft_addtoa(va_arg(lst, unsigned long)) : 0;
	(spec->type == PERC) ? spec->arg_as_a_string = ft_char_to_string('%') : 0;
	(spec->type == FLOAT) ? spec->arg_as_a_string = ft_ftoa((va_arg(lst, double))) : 0;
	// (spec->type == SCI_NOTATION) ? spec->arg_as_a_string = ft_scinottoa((va_arg(lst, double))) : 0;
	if ((spec->type == CAP_HEXADEC || spec->type == HEXADEC) && 
			spec-> hashtag_flag == 1 && *spec->arg_as_a_string == '0')
		spec->hashtag_flag = 0;
	if (spec->type == CHAR && *spec->arg_as_a_string == 0)
		spec->type = CHAR_IS_ZERO;
	if (spec->type == STRING && spec->arg_as_a_string == 0) 
		spec->arg_as_a_string = ft_strdup("(null)");
	if (spec->type == SIGNED_INT && spec->arg_as_a_string[0] == '-')
		spec->space_plus_flag = NO_FLAG_SPACE_PLUS;
}
