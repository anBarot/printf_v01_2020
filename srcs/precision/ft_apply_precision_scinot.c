/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_precision_scinot.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:41:28 by abarot            #+#    #+#             */
/*   Updated: 2020/01/22 13:52:49 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_apply_precision_scinot(t_spec *spec)
{
	int		i_str;
	char	*exponent;

	i_str = 0;
	while (spec->arg_str[i_str] != 'e')
		i_str++;
	exponent = ft_strdup(spec->arg_str + i_str);
	i_str = 0;
	ft_apply_precision_float(spec);
	spec->arg_str = ft_strjoin(spec->arg_str, exponent, 3);
}
