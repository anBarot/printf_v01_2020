/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_plus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:22:05 by abarot            #+#    #+#             */
/*   Updated: 2020/01/20 11:22:14 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_apply_plus(t_spec *spec)
{
	if (spec->arg_as_a_string[0] != '-' && (spec->type == SIGNED_INT ||
		spec->type == FLOAT))
		spec->arg_as_a_string = ft_strjoin("+", spec->arg_as_a_string, 2);
}
