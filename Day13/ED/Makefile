CC=gcc
SRC=$(wildcard *.c)
OBJ = $(SRC:.c=.o)
UTILS=../utils
NAME=libbtree.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all