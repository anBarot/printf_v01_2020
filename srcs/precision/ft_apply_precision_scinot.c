/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_precision_scinot.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:24:34 by abarot            #+#    #+#             */
/*   Updated: 2020/01/27 11:15:15 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_apply_precision_scinot(t_spec *spec)
{
	int		i_exp;
	int		i_point;

	i_point = 0;
	i_exp = ft_strlen(spec->arg_str) - 1;
	while (spec->arg_str[i_point] != '.')
		i_point++;
	spec->arg_str[i_point] = '\0';
	while (spec->arg_str[i_exp] != 'e')
		i_exp--;
	spec->arg_str = ft_strjoin(spec->arg_str, spec->arg_str + i_exp, 1);
}
