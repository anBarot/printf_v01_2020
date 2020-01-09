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
	int			flag;
	int			width;
	int			precision;
	int			size;
	char		*arg_as_a_string;
}				t_spec;
enum			flag_enum
{
	NO_FLAG,
	LESS,
	PLUS,
	ZERO,
	SPACE,
	HASHTAG
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
#endif