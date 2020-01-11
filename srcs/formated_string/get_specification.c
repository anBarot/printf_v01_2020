/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_specification.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:22:59 by abarot            #+#    #+#             */
/*   Updated: 2020/01/08 17:00:27 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_initialyse_spec(t_spec *spec)
{
	enum type_enum;
	enum flag_enum;

	spec->type = ERROR;
	spec->flag = NO_FLAG;
	spec->width = 0;
	spec->precision = 0;
	spec->size = 0;
}

void	ft_get_type(char *str, t_spec *spec)
{
	int 	i_str;
	enum	type_enum;

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
		i_str++;
	}
}

void	ft_get_flag(char *str, t_spec *spec)
{
	int i_str;

	i_str = 0;
	while (str[i_str] == '0')
	{	
		spec->flag = ZERO;
		i_str++;
	}
	if (str[i_str] == '-')
		spec->flag = LESS;
	if (str[i_str] == '+')
		spec->flag = PLUS;
	if (str[i_str] == ' ')
		spec->flag = SPACE;
	if (str[i_str] == '#')
		spec->flag = HASHTAG;
}

void	ft_get_width(char *str, va_list lst, t_spec *spec)
{
	int i_str;

	i_str = 0;
	while (str[i_str] && str[i_str] != '.')
	{
		while ((str[i_str] == '-' || str[i_str] == '+' || str[i_str] == '0')
															&& str[i_str])
			i_str++;
		while (str[i_str] == '*')
		{
			spec->width = va_arg(lst, unsigned int);
			if (spec->width < 0)
				spec->flag = LESS;
			i_str++;
		}
		if (ft_isdigit(str[i_str]))
			spec->width = ft_atoi(str + i_str);
		while (ft_isdigit(str[i_str]))
			i_str++;
	}
}

void ft_get_precision_and_size(char *str, va_list lst, t_spec *spec)
{
	int i_str;

	i_str = 0;
	while (str[i_str])
	{
		if (str[i_str] == '.')
		{
			if (ft_isdigit(str[i_str + 1])) 
			{
				spec->precision = 1;
				spec->size = ft_atoi(str + i_str + 1);
			}
			else while (!ft_isdigit(str[i_str]))
			{
				ft_get_flag(str + i_str + 1, spec);
				ft_get_width(str + i_str + 1, lst, spec);
			}
		}
		i_str++;
	}
}

void	ft_get_arg_as_a_string(char *str, va_list lst, t_spec *spec)
{
	(spec->type == CHAR) ? spec->arg_as_a_string = ft_char_to_str(va_arg(lst, int)) : 0;
	(spec->type == STRING) ? spec->arg_as_a_string = ft_strdup(va_arg(lst, char *)) : 0;
	(spec->type == SIGNED_INT) ? spec->arg_as_a_string = ft_itoa(va_arg(lst, int)) : 0;
	(spec->type == UNSIGNED_INT) ? spec->arg_as_a_string = ft_utoa(va_arg(lst, unsigned int)) : 0;
	(spec->type == CAP_HEXADEC) ? spec->arg_as_a_string = ft_toupper_string(ft_hextoa(va_arg(lst, unsigned int))) : 0;
	(spec->type == HEXADEC) ? spec->arg_as_a_string = ft_hextoa(va_arg(lst, unsigned int)) : 0;
	(spec->type == ADDRESS) ? spec->arg_as_a_string = ft_addtoa(va_arg(lst, unsigned long)) : 0;
	(spec->type == PERC) ? spec->arg_as_a_string = ft_char_to_str('%') : 0;
}
