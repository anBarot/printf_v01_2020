/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_is_neg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:28:58 by abarot            #+#    #+#             */
/*   Updated: 2020/01/22 16:16:11 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_arg_is_neg(int value, t_spec *spec)
{
	spec->zero_less_flag = LESS;
	spec->width = -value;
	spec->precision = 0;
}
