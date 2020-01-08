/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:19:04 by abarot            #+#    #+#             */
/*   Updated: 2020/01/08 16:20:11 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_add_node(t_str_list *str_list, char *content)
{
	t_str_list	*new_node;

	if (!content || !str_list || 
		!(new_node = (t_str_list *)ft_calloc(1, sizeof(t_str_list))))
		return (0);
	new_node->content = content;
	new_node->next = 0;
	while (str_list->next != 0)
		str_list = str_list->next;
	str_list->next = new_node;
}
