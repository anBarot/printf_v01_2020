/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arg_as_a_string_llhh.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:27:34 by abarot            #+#    #+#             */
/*   Updated: 2020/01/22 17:43:42 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_get_arg_as_a_string_llhh(va_list lst, t_spec *spec)
{
	(spec->l_ll_h_hh_flag == L) ? ft_get_arg_str_l(lst, spec) : 0;
	(spec->l_ll_h_hh_flag == LL) ? ft_get_arg_str_ll(lst, spec) : 0;
	(spec->l_ll_h_hh_flag == H) ? ft_get_arg_str_h(lst, spec) : 0;
	(spec->l_ll_h_hh_flag == HH) ? ft_get_arg_str_hh(lst, spec) : 0;
}
