NAME = libmy.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	mkdir -p ../../include
	cp my.h ../../include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all