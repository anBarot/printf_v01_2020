# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarot <abarot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 12:18:43 by abarot            #+#    #+#              #
#    Updated: 2020/01/27 11:16:22 by abarot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	srcs/ft_printf.c \
			srcs/initialyse_and_apply_spec/apply_spec.c \
			srcs/initialyse_and_apply_spec/create_formated_string.c \
			srcs/initialyse_and_apply_spec/ft_initialyse_spec.c \
			srcs/initialyse_and_apply_spec/ft_display_char_is_zero.c \
			srcs/initialyse_and_apply_spec/ft_spec_is_valid.c \
			srcs/parse_functions/ft_get_type.c \
			srcs/parse_functions/ft_get_flags.c \
			srcs/parse_functions/ft_get_l_ll.c \
			srcs/parse_functions/ft_get_precision_and_size.c \
			srcs/parse_functions/ft_get_arg_as_a_string.c \
			srcs/parse_functions/ft_get_width.c \
			srcs/width_and_flag/ft_apply_hashtag.c \
			srcs/width_and_flag/ft_apply_less.c \
			srcs/width_and_flag/ft_apply_no_flag.c \
			srcs/width_and_flag/ft_apply_plus.c \
			srcs/width_and_flag/ft_apply_space.c \
			srcs/width_and_flag/ft_apply_zero.c \
			srcs/precision/ft_apply_precision_address.c \
			srcs/precision/ft_apply_precision_number.c \
			srcs/precision/ft_apply_precision_string.c \
			srcs/precision/ft_apply_precision_float.c \
			srcs/precision/ft_apply_precision_scinot.c \
			srcs/l_ll_flag/ft_get_arg_as_a_string_ll.c \
			srcs/l_ll_flag/ft_get_arg_str_l.c \
			srcs/l_ll_flag/ft_get_arg_str_ll.c 

SRCS_LIB	=	libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memccpy.c \
				libft/ft_memmove.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_strlen.c \
				libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c \
				libft/ft_isprint.c libft/ft_toupper.c libft/ft_tolower.c libft/ft_strchr.c   \
				libft/ft_strrchr.c libft/ft_strncmp.c libft/ft_strlcpy.c libft/ft_strlcat.c   \
				libft/ft_strnstr.c libft/ft_atoi.c libft/ft_calloc.c libft/ft_strdup.c    \
				libft/ft_substr.c libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_split.c   \
				libft/ft_itoa.c libft/ft_strmapi.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c  \
				libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_toupper_string.c \
				libft/ft_reverse_string.c libft/ft_hextoa.c libft/ft_addtoa.c libft/ft_char_to_str.c \
				libft/ft_utoa.c libft/ft_ftoa.c libft/ft_litoa.c \
				libft/ft_is_printf_type.c libft/ft_is_printf_option.c \
				libft/ft_scinottoa.c libft/ft_llitoa.c libft/ft_lutoa.c libft/ft_llutoa.c \
				libft/ft_lhextoa.c libft/ft_llhextoa.c

OBJS		=	$(SRCS:.c=.o)

OBJS_LIB	=	$(SRCS_LIB:.c=.o)

INCLUDE	=	include

LIB		=	libft

LIB_PATH	=	libft/

CFLAGS	=	 -Wall -Wextra -Werror

RM	=	rm -f

all	:
		make -C libft
		@make $(NAME)
		
%.o : %.c
		gcc $(CFLAGS) -c $< -o $@ -I$(INCLUDE)

$(NAME)	: $(OBJS) $(OBJS_LIB)	
		ar -rc $(NAME) $(OBJS) $(OBJS_LIB)		
		ranlib $(NAME)

clean	:
		$(RM) $(OBJS) && make -C libft fclean

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
