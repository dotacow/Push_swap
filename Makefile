CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBDIR = libft
LIB = $(LIBDIR)/libft.a

SRC = ft_sort.c push_swap.c ft_free.c ilstoperations.c\
getlist.c ilstop2.c ft_swap.c ft_push.c ft_rotate.c ft_rrotate.c

SRCS = $(addprefix srcs/,$(SRC))

OFILES := $(addprefix ofiles/,$(SRC:.c=.o))
NAME = push_swap

ofiles/%.o: srcs/%.c
	mkdir -p ofiles
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OFILES) $(LIB)
	$(CC) $(OFILES) -L$(LIBDIR) -lft -o $(NAME)

$(LIB):
	make -C $(LIBDIR)

clean:
	rm -rf ofiles
	make clean -C $(LIBDIR)
fclean: clean
	make fclean -C $(LIBDIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re