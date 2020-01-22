/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialyse_spec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:22:59 by abarot            #+#    #+#             */
/*   Updated: 2020/01/22 16:11:39 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_initialyse_spec(t_spec *spec)
{
	spec->type = ERROR;
	spec->zero_less_flag = NO_FLAG_ZERO_LESS;
	spec->space_plus_flag = NO_FLAG_SPACE_PLUS;
	spec->l_ll_h_hh_flag = NO_FLAG_L_LL_H_HH;
	spec->hashtag_flag = 0;
	spec->width = 0;
	spec->precision = 0;
	spec->size = 0;
}
