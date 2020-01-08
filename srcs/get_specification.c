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

void	ft_initialyse_spec(spec);
{
	spec->type = 0;
	spec->flag = 0;
	spec->width = 0;
	spec->precision = 0;
	spec->size = 0;
}

void	ft_get_type(char *str, t_spec *spec)
{
	int 	i_str;
	enum	type_enum;

	i_str = 0;
	while (str[i_str] && spec->type == 0)
	{
		if (str[i_str] == 'c')
			spec->type = CHAR;
		if (str[i_str] == 'i' || str[i_str] == 'd')
			spec->type = SIGNED_INT,;
		if (str[i_str] == 'X')
			spec->type = CAP_HEXADEC;
		if (str[i_str] == 'x')
			spec->type = HEXADEC;
		if (str[i_str] == 'p')
			spec->type = ADDRESS;
		if (str[i_str] == 'u')
			spec->type = UNSIGNED_INT;
		if (str[i_str] == '%')
			spec->type = PERC;
		if (str[i_str] == 's')
			spec->type = STRING;
		i_str++;
	}
}

void	ft_get_flag(char *str);
{
	int i_str;

	i_str = 0;
	while (ft_isdigit(str[i_str]) || str[i_str])
	{



	}
}

ft_get_width(str);
{




}

ft_get_precision(str);
{}

ft_get_size(str);
{}

ft_get_arg_as_a_string(str, arg_lst);
{}