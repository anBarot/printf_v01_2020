/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_formated_string.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:30:39 by abarot            #+#    #+#             */
/*   Updated: 2020/01/08 16:52:27 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_formated_string(char *str, va_list arg_lst)
{
	char	*formated_string;
	t_spec	*spec;
	
	if (!(spec = (t_spec *)ft_calloc(sizeof(t_spec), 1)))
		return (0);
	ft_initialyse_spec(spec);
	ft_get_arg_as_a_string(str, arg_lst, spec);
	ft_get_type(str, spec);
	ft_get_flags(str, spec);
	ft_get_width(str, spec);
	ft_get_precision_and_size(str, spec);
	formated_string = ft_apply_spec(spec);
	free(spec->arg_as_a_string);
	free(spec);
	return (formated_string);
}
