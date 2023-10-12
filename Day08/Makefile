CC=gcc
CDFLAGS=-W -Wall -Werror
SRC=$(wildcard *.c)

OBJ = $(SRC:.c=.o)

NAME=day-08

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $(SRC) $(CDFLAGS)

clean:
	@find . -name "*.o" -delete\
        -o -name "valgrind*" -delete\
        -o -name "*.gcda" -delete\
        -o -name "*.gcno" -delete\
        -o -name "*~" -delete\
        -o -name "#*#" -delete

fclean: clean
	@rm $(NAME)

re: fclean all