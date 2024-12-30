CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes
LIBDIR = libft
LIB = $(LIBDIR)/libft.a

INSTRUCTIONS = ft_swap.c ft_push.c ft_rotate.c ft_rrotate.c
INSTRUCTIONS := $(addprefix instructions/,$(INSTRUCTIONS))

SRC = main.c exit_helpers.c ft_sort.c big_sort.c getlist.c node_helpers.c stack_helpers.c $(INSTRUCTIONS)

SRCS =  $(addprefix srcs/,$(SRC))

OFILES := $(addprefix ofiles/,$(SRC:.c=.o))
NAME = push_swap

ofiles/%.o: srcs/%.c
	@mkdir -p $(dir $@)
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