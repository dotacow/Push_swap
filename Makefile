CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = push_swap.c #more files TBD.
OFILES = $(SRC:.c=.o)
LIBDIR = libft
NAME = libftprintf.a
LIB = $(LIBDIR)/libft.a

all: $(NAME)

$(NAME): $(OFILES) $(LIB)
	ar rcs $(NAME) $(OFILES)

$(LIB):
	make -C $(LIBDIR)
	cp $(LIB) $(NAME)

clean:
	rm -f $(OFILES)
	make clean -C $(LIBDIR)
fclean: clean
	make fclean -C $(LIBDIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re