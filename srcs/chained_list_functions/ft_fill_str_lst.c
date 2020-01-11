/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_str_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:19:47 by abarot            #+#    #+#             */
/*   Updated: 2020/01/08 16:20:04 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_str_list	*ft_fill_str_lst(char *str, va_list *arg_lst)
{
	int	start;
	int end;
	int	size;
	t_str_list *str_list;

	start = 0;
	end = 0;
	ft_initialize_list(str_list);
	while (str[end])
	{
		if ((str[end] == '%' && end != start)
		{	
			ft_add_node(str_list, ft_substr(str, start, size));
			ft_add_node(str_list, ft_formated_string(str + end, arg_lst));
			while (!ft_isalpha(str[end]) && str[end])
				end++;
			start = end + 1;
		}
		if (!str[end])
			return (str_list);
		size = end - start;
		end++;
	}
	ft_add_node(str_list, ft_substr(str, start, size));
	return (str_list);
}