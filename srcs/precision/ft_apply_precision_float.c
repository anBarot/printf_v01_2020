/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_precision_float.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:40:58 by abarot            #+#    #+#             */
/*   Updated: 2020/01/22 14:36:08 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_apply_precision_float(t_spec *spec)
{
	int i_str;

	i_str = 0;
	while (spec->arg_str[i_str] != '.')
		i_str++;
	spec->arg_str[i_str] = '\0';
}
