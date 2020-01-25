/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_l_ll.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:31:24 by abarot            #+#    #+#             */
/*   Updated: 2020/01/25 13:42:41 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_get_l_ll(const char *str, t_spec *spec)
{
	int i_str;

	i_str = 0;
	while (!ft_is_printf_type(str[i_str]))
	{
		if (str[i_str] == 'l' && str[i_str + 1] == 'l')
		{
			spec->l_ll_flag = LL;
			i_str++;
		}
		else if (str[i_str] == 'l')
			spec->l_ll_flag = L;
		i_str++;
	}
}
