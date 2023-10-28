NAME = libftprintf.a

LIBFT = libft.a

LIBDIR = ./libft/

SRCS =	ft_printf.c \
		ft_printf_utils.c \
		ft_printf_functions.c \
		ft_printf_utils2.c \

AR = ar rcs

OBJS =	${SRCS:.c=.o}


CC =	cc

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -Ilibft

$(NAME): ${OBJS}
		cd ./libft && $(MAKE) && cp -v ${LIBFT} ../${NAME}
		$(AR) $(NAME) ${OBJS} 
		
bonus : $(NAME)

compile: $(OBJS)
		$(MAKE) -C libft
		$(CC) $(CFLAGS) -o a.out $(OBJS) libft/libft.a -Ilibft

all:	${NAME}

clean:
		rm -f ${OBJS}
		cd ${LIBDIR} && ${MAKE} clean

fclean:	clean
		rm -f ${NAME}
		cd ${LIBDIR} && ${MAKE} fclean

re:	fclean all

.PHONY: all clean fclean re