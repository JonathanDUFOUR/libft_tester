# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/07 18:16:41 by jodufour          #+#    #+#              #
#    Updated: 2021/03/07 19:29:28 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	tester

LIBFT		=	libft/libft.a

INCLUDES	=	includes	\
				${dir ${LIBFT}}

SRCD		=	srcs/

SRCS		:=	main.c						\
				test_ft_atoi_base.c			\
				test_ft_atoi.c				\
				test_ft_atol.c				\
				test_ft_bzero.c				\
				test_ft_calloc.c			\
				test_ft_cat.c				\
				test_ft_convert_base.c		\
				test_ft_cut_spaces.c		\
				test_ft_file_size.c			\
				test_ft_find_next_prime.c	\
				test_ft_indexof.c			\
				test_ft_int_size.c			\

OBJS		:=	${SRCS:.c=.o}

SRCS		:=	${addprefix ${SRCD}, ${SRCS}}

OBJD		=	objs/

OBJS		:=	${addprefix ${OBJD}, ${OBJS}}

CFLAGS		=	-Wall -Wextra ${addprefix -I, ${INCLUDES}}

LDFLAGS		=	-L ${dir ${LIBFT}} -lft

CC			=	gcc -c

LINKER		=	gcc

RM			=	rm -f


${NAME}:	${OBJS}
	${LINKER} ${OBJS} ${LDFLAGS} -o ${NAME}

all:	${NAME}

${OBJD}%.o:	${SRCD}%.c
	mkdir -p ${dir $@}
	${CC} ${CFLAGS} $< -o $@

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${OBJS}
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re