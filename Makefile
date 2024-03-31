CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS = printf.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

libft.a:
	cd ./libft && make

libft_clean:
	cd ./libft && make clean

libft_fclean:
	cd ./libft && make fclean

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: libft_clean
	rm -f $(OBJS)

fclean: clean libft_fclean
	rm -f $(NAME)

re: fclean all

deb: libft.a
	$(CC) $(CFLAGS) -g3 -fsanitize=address main.c libft/libft.a $(SRCS) -o test