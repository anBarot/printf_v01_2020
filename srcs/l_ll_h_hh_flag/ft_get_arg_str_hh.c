/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arg_str_hh.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:27:34 by abarot            #+#    #+#             */
/*   Updated: 2020/01/22 17:23:49 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_get_arg_str_hh(va_list lst, t_spec *spec)
{
	// if (spec->type == SIGNED_INT)
	// 	spec->arg_str = ft_itoa(va_arg(lst, int))	
	// else if (spec->type == HEXADEC || spec->type == CAP_HEXADEC ||
	// spec->type == UNSIGNED_INT)
	// {
		
	// }
	// else
		ft_get_arg_as_a_string(lst, spec);
}