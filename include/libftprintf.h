/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:19:04 by abarot            #+#    #+#             */
/*   Updated: 2020/01/08 16:55:20 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include "libft.h"
typedef struct	s_str_list
{
	char		*content;
	t_str_list	*next;
}				t_str_list;
typedef struct	s_spec
{
	int			type;
	int			zero_less_flag;
	int			space_plus_hashtag_flag;
	int			width;
	int			precision;
	int			size;
	char		*arg_as_a_string;
}				t_spec;
enum			zero_less_flag_enum
{
	NO_FLAG,
	ZERO,
	LESS,
};
enum			space_plus_hashtag_flag_enum
{
	NO_FLAG,
	SPACE,
	PLUS,
	HASHTAG,
};
enum			type_enum
{
	ERROR,
	CHAR,
	STRING,
	ADDRESS,
	HEXADEC,
	CAP_HEXADEC,
	SIGNED_INT,
	UNSIGNED_INT,
	PERC
};
int			ft_printf(const char *str, ...);
void		ft_add_node(t_str_list *str_list, char *content);
char		*ft_concat_string_list(t_str_list *str_list);
t_str_list	*ft_fill_str_lst(char *str, va_list *arg_lst);
char		*ft_formated_string(char *str, va_list arg_lst);
void		ft_initialyse_spec(t_spec *spec);
void		ft_get_type(char *str, t_spec *spec);
void		ft_get_flags(char *str, t_spec *spec);
void		ft_get_width(char *str, va_list lst, t_spec *spec);
void 		ft_get_precision_and_size(char *str, va_list lst, t_spec *spec);
void		ft_get_arg_as_a_string(char *str, va_list lst, t_spec *spec);
char		*ft_apply_spec(t_spec *spec);
void		ft_apply_no_flag(t_spec *spec);
void		ft_apply_width(t_spec *spec);
void		ft_apply_hashtag(t_spec *spec);
void		ft_apply_less(t_spec *spec);
void		ft_apply_plus(t_spec *spec);
void		ft_apply_space(t_spec *spec);
void		ft_apply_zero(t_spec *spec);
void		ft_apply_precision(t_spec *spec);
void		ft_apply_precision_address(t_spec *spec);
void		ft_apply_precision_char(t_spec *spec);
void		ft_apply_precision_int(t_spec *spec);
void		ft_apply_precision_string(t_spec *spec);
#endif