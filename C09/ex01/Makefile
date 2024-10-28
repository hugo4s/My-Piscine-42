NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c

OBJECTS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.o:
	cc ${CFLAGS} -c $< -o ${<:.c=.o} -I includes

${NAME}: ${OBJECTS}
	ar rc ${NAME} ${OBJECTS}
	ranlib ${NAME}

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all
