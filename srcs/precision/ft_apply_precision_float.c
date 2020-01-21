/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_precision_float.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:24:04 by abarot            #+#    #+#             */
/*   Updated: 2020/01/21 15:46:55 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_apply_precision_float(t_spec *spec)
{
	int i_str;

	i_str = 0;
	while (spec->arg_str[i_str] != '.' && spec->arg_str[i_str])
		i_str++;
	if (!spec->arg_str[i_str])
		return ;
	if (spec->size == 0)
	{
		spec->arg_str[spec->size + i_str] = '\0';
		return ;
	}
	if ((int)(ft_strlen(spec->arg_str) - i_str - 2) >= spec->size)
		spec->arg_str[spec->size + i_str + 2] = '\0';
	spec->arg_str = ft_rounded_ascii(spec->arg_str);
	while ((int)ft_strlen(spec->arg_str) < (spec->size + i_str + 1))
		spec->arg_str = ft_strjoin(spec->arg_str, "0", 1);
}
