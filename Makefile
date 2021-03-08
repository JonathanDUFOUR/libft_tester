# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/07 18:16:41 by jodufour          #+#    #+#              #
#    Updated: 2021/03/08 22:27:46 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	tester
CC			=	gcc -c -o
CCPP		=	g++ -c -o
LINKER		=	g++ -o
MAKEDIR		=	mkdir -p
# RM			=	rm -f

LIBFT		=	${HOME}/libft/libft.a

SRCD		=	srcs/

OBJD		=	objs/

CLSD		=	classes/

INCLUDES	=	\
				${CLSD}			\
				includes		\
				${dir ${LIBFT}}

COMFLAGS	:=	-Wall -Wextra ${addprefix -I, ${INCLUDES}}
CFLAGS		:=	${COMFLAGS}
CPPFLAGS	:=	${COMFLAGS}

LDFLAGS		=	-L ${dir ${LIBFT}} -lft

CLASSES		:=	tester
CLASSES		:=	${addprefix ${CLSD}, ${CLASSES}}
CLASSES		:=	${addsuffix .cpp, ${CLASSES}}

SRCS		:=	main.cpp	\

OBJS		:=	${SRCS:.c=.o}
OBJS		:=	${SRCS:.cpp=.o}
OBJS		:=	${addprefix ${OBJD}, ${OBJS} ${CLASSES:.cpp=.o}}
SRCS		:=	${addprefix ${SRCD}, ${SRCS}} ${CLASSES}


${NAME}:	${OBJS}
	${LINKER} ${NAME} ${OBJS} ${LDFLAGS}

all:	${NAME}

${OBJD}%.o:	${SRCD}%.c
	${MAKEDIR} ${dir $@}
	${CC} $@ ${CFLAGS} $<

${OBJD}%.o:	${SRCD}%.cpp
	${MAKEDIR} ${dir $@}
	${CCPP} $@ ${CPPFLAGS} $<

${OBJD}${CLSD}%.o:	${CLSD}%.cpp
	${MAKEDIR} ${dir $@}
	${CCPP} $@ ${CPPFLAGS} $<
	
clean:
	${RM} ${OBJS}

fclean:
	${RM} ${OBJS}
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
