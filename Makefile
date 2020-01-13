# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarot <abarot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 12:18:43 by abarot            #+#    #+#              #
#    Updated: 2020/01/08 13:09:15 by abarot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	srcs/ft_printf.c \
			srcs/chained_list_functions/ft_add_node.c srcs/chained_list_functions/ft_concat_string_list.c srcs/chained_list_functions/ft_fill_str_lst.c \
			srcs/formated_string/apply_spec.c srcs/formated_string/create_formated_string.c srcs/formated_string/get_specification.c \
			srcs/formated_string/width/ft_apply_hashtag.c srcs/formated_string/width/ft_apply_less.c srcs/formated_string/width/ft_apply_no_flag.c srcs/formated_string/width/ft_apply_plus.c
			srcs/formated_string/width/ft_apply_space.c srcs/formated_string/width/ft_apply_zero.c \
			srcs/formated_string/precision/ft_apply_precision_address.c srcs/formated_string/precision/ft_apply_precision_char.c srcs/formated_string/precision/ft_apply_precision_int.c srcs/formated_string/precision/ft_apply_precision_string.c

OBJS	=	$(SRCS:.c=.o)

INCLUDE	=	include

LIB		=	libft

LIB_PATH	=	lib/

CFLAGS	=	-Werror -Wall -Wextra

RM	=	rm -f

%.o : %.c
		gcc $(FLAGS) -c $< -o $@ -I$(INCLUDE) -L$(LIB_PATH) -l$(LIB)

all	:
		make -C lib
		@make $(NAME)
		

$(NAME)	: $(OBJS)
		ar -rc $(NAME) $(OBJS) 
		ranlib $(NAME)

clean	:
		$(RM) $(OBJS) && make -C lib fclean

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all