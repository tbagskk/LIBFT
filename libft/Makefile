SRCS			= ${wildcard ft_*.c}
HEADERS			= libft.h
OBJS			= ${SRCS:.c=.o}
CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
NAME			= libft.a
RM				= rm -rf

.c.o			:
	${CC} ${FLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME}			: ${OBJS}
	ar rc ${NAME} ${OBJS}

all				: ${NAME}

clean			:
	${RM} ${OBJS}

fclean			: clean
	${RM} ${NAME}

re				: fclean all
