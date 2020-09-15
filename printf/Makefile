# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 18:33:50 by llopez-d          #+#    #+#              #
#    Updated: 2020/09/08 22:21:15 by llopez-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_printf.c \
		ft_arg_char.c \
		ft_arg_int.c \
		ft_arg_string.c \
		ft_arg_unsig.c \
		ft_arg_pointer.c \
		ft_arg_hex.c \
		ft_flags_init.c \
		ft_is_a_flag.c \
		ft_which_is.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_utoa.c \
		ft_ulltoa_base.c \
		ft_utoa_base.c

OBJ = ${SRC:.c=.o}

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME):
		${CC} ${FLAGS} -c ${SRC}
		ar rc ${NAME}	${OBJ}
		ranlib ${NAME}

clean:
		rm -f ${OBJ}

fclean: clean
		rm -f ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re