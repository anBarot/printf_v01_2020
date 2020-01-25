/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arg_as_a_string_ll.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:27:34 by abarot            #+#    #+#             */
/*   Updated: 2020/01/25 13:16:47 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_get_arg_as_a_string_l_ll(va_list lst, t_spec *spec)
{
	(spec->l_ll_flag == L) ? ft_get_arg_str_l(lst, spec) : 0;
	(spec->l_ll_flag == LL) ? ft_get_arg_str_ll(lst, spec) : 0;
}
