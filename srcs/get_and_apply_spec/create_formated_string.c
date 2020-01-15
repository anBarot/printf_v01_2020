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

int		ft_formated_string(const char *str, va_list arg_lst)
{
	// printf("\n---creating formated string---\n");
	t_spec	*spec;
	int		to_return;
	
	to_return = 0;
	if (!(spec = (t_spec *)ft_calloc(sizeof(t_spec), 1)))
		return (0);
	ft_initialyse_spec(spec);
	ft_get_flags(str, spec);
	ft_get_width(str, arg_lst, spec);
	ft_get_precision_and_size(str, arg_lst, spec);
	ft_get_type(str, spec);
	ft_get_arg_as_a_string(arg_lst, spec);
	// printf("\ntype : %d\narg as a string : |%s|\nwidth : %d\nflag zero less: %d\nflag plus hash space : %d\n%s precision\nsize : %d\n", 
	// spec->type, spec->arg_as_a_string, spec->width, spec->zero_less_flag, spec->space_plus_hashtag_flag,(spec->precision == 1) ? "YES" : "NO",spec->size);
	ft_apply_spec(spec);
	to_return = ft_strlen(spec->arg_as_a_string);
	if (spec->type == CHAR_IS_ZERO)
	{
		ft_display_char_is_zero(spec);
		to_return++;
	}
	else
		ft_putstr_fd(spec->arg_as_a_string, 1);
	free(spec->arg_as_a_string);
	free(spec);
	return (to_return);
}

void	ft_display_char_is_zero(t_spec *spec)
{
	if (spec->zero_less_flag == LESS)
	{
		ft_putchar_fd(0, 1);
		ft_putstr_fd(spec->arg_as_a_string, 1);
	}
	else if (spec->zero_less_flag == NO_FLAG_ZERO_LESS)
	{
		ft_putchar_fd(0, 1);
		ft_putstr_fd(spec->arg_as_a_string, 1);
	} 
}