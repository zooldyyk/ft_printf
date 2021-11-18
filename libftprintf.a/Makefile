NAME = libftprintf.a

SRC = ft_printf.c ft_printf_utils.c ft_printf_utils2.c ft_print_hex.c ft_printf.c ft_print_unsigned.c ft_itoa.c ft_print_ptr.c 

OBJ = ${SRC:.c=.o}

CC      = gcc
RM      = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJ}
	ar rcs ${NAME} ${OBJ}

all:	${NAME}

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re:		fclean all