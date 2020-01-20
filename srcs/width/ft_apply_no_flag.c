/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_no_flag.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:21:55 by abarot            #+#    #+#             */
/*   Updated: 2020/01/20 11:21:57 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_apply_no_flag(t_spec *spec)
{
	while (spec->width > (int)ft_strlen(spec->arg_as_a_string))
		spec->arg_as_a_string = ft_strjoin(" ", spec->arg_as_a_string, 2);
}
