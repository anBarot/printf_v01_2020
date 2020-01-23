/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_precision_and_size.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:29:29 by abarot            #+#    #+#             */
/*   Updated: 2020/01/23 13:51:39 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_get_precision_and_size(const char *str, va_list lst, t_spec *spec)
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
				spec->size = va_arg(lst, int);
				(spec->size < 0) ? spec->precision = 0 : 0;
				i_str++;
			}
			if (ft_isdigit(str[i_str]))
				spec->size = ft_atoi(str + i_str);
			else if (str[i_str] == '-')
				spec->zero_less_flag = LESS;
			else if (str[i_str] != '.' && str[i_str] != '-')
				break ;
		}
		else
			i_str++;
	}
}
