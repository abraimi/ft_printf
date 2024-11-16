NAME = libftprintf.a
SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rsc $(NAME) $?

%.c: %.o
	$(CC) $(CFLAGS) -c $?

clean: $(OBJS)
	rm -r $(OBJS)

fclean: clean
	rm -r $(NAME)

re: fclean all

.PHONY: all clean fclean
