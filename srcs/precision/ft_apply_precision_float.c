/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_precision_float.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:24:34 by abarot            #+#    #+#             */
/*   Updated: 2020/01/27 11:11:02 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_apply_precision_float(t_spec *spec)
{
	spec->arg_str[ft_strlen(spec->arg_str) - 7] = '\0';
}
