/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:16:56 by abarot            #+#    #+#             */
/*   Updated: 2020/01/08 16:50:22 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list		arg_lst;
	char		*str_to_display;
	int			str_length;
	t_str_list	*string_list;

	va_start(arg_lst, str);
	if (!(string_list = ft_fill_str_lst(str, arg_lst)))
		return (0);
	va_end(arg_lst);
	str_to_display = ft_concat_string_list(string_list);
	ft_putstr_fd(str_to_display, 1);
	str_length = ft_strlen(str_to_display);
	free(str_to_display);
	return (str_length);
}
