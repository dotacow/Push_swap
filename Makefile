CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBDIR = libft
LIB = $(LIBDIR)/libft.a

SRCS = ft_sort.c push_swap.c ft_free.c ilstoperations.c\
getlist.c ilstop2.c ft_swap.c ft_push.c ft_rotate.c ft_rrotate.c

SRCS := $(addprefix srcs/,$(SRCS))

OFILES = $(SRCS:.c=.o)
# OFILES := $(addprefix objs/,)
NAME = push_swap

all: $(NAME)

$(NAME): $(OFILES) $(LIB)
	$(CC) $(OFILES) -L$(LIBDIR) -lft -o $(NAME)

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