NAME = libftprintf.a
BUILDDIR = build
SRCS = \
		ft_putchar.c	ft_putstr.c		ft_putnbr.c \
		ft_printhex.c	ft_printf.c		ft_printptr.c

# OBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))
OBJS = $(patsubst %.c, $(BUILDDIR)/%.o, $(SRCS))

all: $(BUILDDIR) $(NAME)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

$(NAME): $(OBJS)
	$(AR) rsc $(NAME) $(OBJS)

$(BUILDDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILDDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re