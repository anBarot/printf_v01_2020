/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arg_str_ll.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:27:34 by abarot            #+#    #+#             */
/*   Updated: 2020/01/25 13:09:37 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_get_arg_str_ll(va_list lst, t_spec *spec)
{
	if (spec->type == SIGNED_INT)
		spec->arg_str = ft_llitoa(va_arg(lst, long long));
	else if (spec->type == UNSIGNED_INT)
		spec->arg_str = ft_llutoa(va_arg(lst, unsigned long long));
	else if (spec->type == HEXADEC)
		spec->arg_str = ft_llhextoa(va_arg(lst, unsigned long long));
	else if (spec->type == CAP_HEXADEC)
		spec->arg_str = ft_toupper_string(
			ft_llhextoa(va_arg(lst, unsigned long long)));
	else
		ft_get_arg_as_a_string(lst, spec);
}
