/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:16:56 by abarot            #+#    #+#             */
/*   Updated: 2020/01/20 11:23:41 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list		arg_lst;
	int			to_return;
	int			i_str;

	va_start(arg_lst, str);
	i_str = 0;
	to_return = 0;
	while (str[i_str])
	{
		if (str[i_str] != '%' && str[i_str])
		{
			ft_putchar_fd(str[i_str], 1);
			to_return++;
		}
		else if (str[i_str])
		{
			i_str++;
			to_return += ft_formated_string(str + i_str, arg_lst);
			while (str[i_str] && !ft_is_printf_type(str[i_str]))
				i_str++;
		}
		i_str++;
	}
	va_end(arg_lst);
	return (to_return);
}

int	ft_is_printf_type(char c)
{
	if (c == 'n' || c == 'f' || c == 'g' || c == 'e' || c == 'c' || c == 's' ||
		c == 'p' || c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X' ||
		c == '%')
		return (1);
	else
		return (ERROR);
}
