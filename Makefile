
 NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

FILES = ft_strlen.c \
 ft_strlcpy.c \
  ft_strlcat.c \
   ft_isalpha.c \
    ft_isdigit.c \
	 ft_isalnum.c \
      ft_isascii.c \
	   ft_isprint.c \
OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus