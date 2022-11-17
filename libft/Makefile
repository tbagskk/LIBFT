SRCS	=	ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_memmove.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memchr.c \
		  ft_memset.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_substr.c \
		  ft_split.c \
		  ft_strtrim.c \
		  ft_strjoin.c \
		  ft_striteri.c	\
		  ft_strmapi.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_strlen.c \
		  ft_strrchr.c \
		  ft_strnstr.c \
		  ft_strncmp.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_itoa.c \

		 	
NAME	= libft.a
OBJS	= ${SRCS:.c=.o}
BOBJS	= ${BSRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
HEADER	= libft.h

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -c ${SRCS}
			ar rc ${NAME} ${OBJS} ${HEADER}

all:		${NAME}

clean:
			${RM} ${OBJS} ${BOBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all


.PHONY:		all clean fclean re