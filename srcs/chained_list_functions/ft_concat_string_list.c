/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_string_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:19:30 by abarot            #+#    #+#             */
/*   Updated: 2020/01/08 16:20:18 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_concat_string_list(t_str_list *str_list)
{
	char		*str_to_display;
	t_str_list 	*str_list_copy;

	if (!(str_to_display = (char *)ft_calloc(1, sizeof(char))) || !str_list)
		return (0);
	str_list_copy = str_list;
	while (str_list_copy->next != 0)
	{
		str_to_display = ft_strjoin(str_to_display, str_list_copy->content, 3);
		str_list_copy = str_list_copy->next;
	}
	while (str_list != 0)
	{
		str_list_copy = str_list;
		str_list = str_list->next;
		free(str_list_copy);
	}
	return (str_to_display);
}