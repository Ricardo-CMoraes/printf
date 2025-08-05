NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_puthex.c ft_putnbr_unsigned.c ft_putnbr.c ft_putptr.c ft_putstr.c n_digits.c

OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

$(LIBFT):
	make bonus -C $(LIBFT_DIR)

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

norm: 
		norminette -R *.c *.h

clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)
re:		fclean all

.PHONY: all clean fclean re bonus norm