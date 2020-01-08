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

SRCS	=	#srcs/.c

OBJS	=	$(SRCS:.c=.o)

INCLUDE	=	include

LIB		=	libft

LIB_PATH	=	lib/

CFLAGS	=	-Werror -Wall -Wextra

RM	=	rm -f

%.o : %.c
		gcc $(FLAGS) -c $< -o $@ -I$(INCLUDE) -L$(LIB_PATH) -l$(LIB)

all	:
		@make $(NAME)

$(NAME)	: $(OBJS)
		make -C lib
		ar -rc $(NAME) $(OBJS) 
		ranlib $(NAME)

bonus	: $(OBJS) 
		ar -rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean	:
		$(RM) $(OBJS) 

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all