/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:30:52 by abarot            #+#    #+#             */
/*   Updated: 2020/01/21 15:31:08 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
				(spec->width < 0) ? ft_arg_is_neg(spec->width, spec) : 0;
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
