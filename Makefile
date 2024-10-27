CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ilstoperations.c getlist.c push_swap.c #more files TBA.
OFILES = $(SRC:.c=.o)
LIBDIR = libft
NAME = push_swap.out
LIB = $(LIBDIR)/libft.a

all: $(NAME)

$(NAME): $(SRC) $(LIB)
	$(CC) $(CFLAGS) $(SRC) -L$(LIBDIR) -lft -o $(NAME)

$(LIB):
	make -C $(LIBDIR)

clean:
	rm -f $(OFILES)
	make clean -C $(LIBDIR)
fclean: clean
	make fclean -C $(LIBDIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re