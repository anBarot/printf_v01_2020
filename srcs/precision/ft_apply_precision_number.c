/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_precision_number.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:24:16 by abarot            #+#    #+#             */
/*   Updated: 2020/01/20 16:19:19 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_apply_precision_number(t_spec *spec)
{
	if (spec->zero_less_flag == ZERO)
		spec->zero_less_flag = NO_FLAG_ZERO_LESS;
	if (spec->arg_as_a_string[0] == '0' && spec->size == 0)
	{
		spec->arg_as_a_string[0] = '\0';
		return ;
	}
	else if ((spec->type == SIGNED_INT || spec->type == HEXADEC ||
		spec->type == CAP_HEXADEC) && (spec->arg_as_a_string[0] == '-'
		|| spec->arg_as_a_string[0] == '+' || spec->arg_as_a_string[0] == ' '))
	{
		spec->arg_as_a_string[0] = '0';
		while (spec->size > (int)ft_strlen(spec->arg_as_a_string) - 1)
			spec->arg_as_a_string = ft_strjoin("0", spec->arg_as_a_string, 2);
		(!spec->space_plus_flag) ? spec->arg_as_a_string[0] = '-' : 0;
		(spec->space_plus_flag == SPACE) ? spec->arg_as_a_string[0] = ' ' : 0;
		(spec->space_plus_flag == PLUS) ? spec->arg_as_a_string[0] = '+' : 0;
	}
	while (spec->size > (int)ft_strlen(spec->arg_as_a_string))
		spec->arg_as_a_string = ft_strjoin("0", spec->arg_as_a_string, 2);
}
