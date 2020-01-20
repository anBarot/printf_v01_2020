/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_less.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:21:33 by abarot            #+#    #+#             */
/*   Updated: 2020/01/20 11:21:35 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_apply_less(t_spec *spec)
{
	while (spec->width > (int)ft_strlen(spec->arg_as_a_string))
		spec->arg_as_a_string = ft_strjoin(spec->arg_as_a_string, " ", 1);
}
