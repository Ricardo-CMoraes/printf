NAME = libft.a
CC = cc
SRC	=   ft_isalpha.c	ft_memcpy.c		ft_strrchr.c \
		ft_isdigit.c	ft_memmove.c	ft_strncmp.c \
		ft_isalnum.c	ft_strlcpy.c	ft_memchr.c \
		ft_isascii.c 	ft_strlcat.c	ft_memcmp.c \
		ft_isprint.c	ft_toupper.c	ft_strnstr.c \
		ft_strlen.c 	ft_tolower.c	ft_atoi.c	\
		ft_memset.c 	ft_strchr.c	\
		ft_bzero.c \
		ft_calloc.c 	ft_strdup.c \
		ft_substr.c 	ft_strjoin.c \
		ft_strtrim.c 	ft_split.c 		ft_itoa.c \
		ft_strmapi.c 	ft_striteri.c 	ft_putchar_fd.c \
		ft_putstr_fd.c 	ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c		ft_lstadd_front_bonus.c		ft_lstsize_bonus.c		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c	ft_lstdelone_bonus.c		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c		ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

bonus: all $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

norm: 
	norminette -R *.c *.h
clean:
	rm -f $(OBJ) $(BONUS_OBJ)
fclean:
	rm -f $(NAME) $(OBJ) $(BONUS_OBJ)
re:	fclean all
