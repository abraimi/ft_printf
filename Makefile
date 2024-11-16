NAME = libftprintf.a
BUILDDIR = build
SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c
OBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))



all: $(BUILDDIR) $(NAME)

$(BUILDDIR):
	@mkdir -p $(BUILDDIR)

$(NAME): $(OBJS)
	$(AR) -rsc $(NAME) $(OBJS)

$(BUILDDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: $(OBJS)
	rm -rf $(OBJS) $(BUILDDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
