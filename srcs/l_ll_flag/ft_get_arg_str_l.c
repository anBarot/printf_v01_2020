/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arg_str_l.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:27:34 by abarot            #+#    #+#             */
/*   Updated: 2020/01/25 13:00:34 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_get_arg_str_l(va_list lst, t_spec *spec)
{
	if (spec->type == SIGNED_INT)
		spec->arg_str = ft_litoa(va_arg(lst, long));
	else if (spec->type == UNSIGNED_INT)
		spec->arg_str = ft_lutoa(va_arg(lst, unsigned long));
	else if (spec->type == HEXADEC)
		spec->arg_str = ft_lhextoa(va_arg(lst, unsigned long));
	else if (spec->type == CAP_HEXADEC)
		spec->arg_str = ft_toupper_string(
			ft_lhextoa(va_arg(lst, unsigned long)));
	else
		ft_get_arg_as_a_string(lst, spec);
}
