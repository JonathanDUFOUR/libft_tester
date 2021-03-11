NAME		=	tester
CC			=	g++ -c -o
CCPP		=	g++ -c -o
LINKER		=	g++ -o
MAKEDIR		=	mkdir -p
RM			=	rm -rf

SRCD		=	srcs/
OBJD		=	objs/
CLSD		=	classes/

INCLUDES	=	\
				${CLSD}			\
				includes

COMFLAGS	:=	-MD -MMD -Wall -Wextra ${addprefix -I , ${INCLUDES}}
CFLAGS		:=	${COMFLAGS}
CPPFLAGS	:=	${COMFLAGS}

LDFLAGS		=	-lreadline

CLASSES		:=	\
				
CLASSES		:=	${addprefix ${CLSD}, ${CLASSES}}
CLASSES		:=	${addsuffix .cpp, ${CLASSES}}

SRCS		:=	\
				main.cpp	\
				utils.cpp	\

OBJS		:=	${SRCS:.c=.o}
OBJS		:=	${SRCS:.cpp=.o}
OBJS		:=	${addprefix ${OBJD}, ${OBJS} ${CLASSES:.cpp=.o}}
SRCS		:=	${addprefix ${SRCD}, ${SRCS}} ${CLASSES}
INCD		:=	$(OBJS:.o=.d)

${NAME}:	${OBJS}
	${LINKER} ${NAME} ${OBJS} ${LDFLAGS}

-include ${INCD}

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
	${RM} ${OBJD}

fclean:
	${RM} ${OBJD}
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
