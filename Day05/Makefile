CC=gcc
UTILS=../utils
LIBMY=$(UTILS)/lib/my
LIBNAME=my
SRC=$(wildcard *.c ../utils/*.c)
CFLAGS=-W -Wall -Werror -L $(LIBMY) -l $(LIBNAME) -I $(UTILS)
OBJ = $(SRC:.c=.o)

NAME=day-05

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBMY)
	@$(CC) -o $(NAME) $(SRC) $(CFLAGS)

clean:
	@find . $(UTILS) -name "*.o" -delete\
        -o -name "valgrind*" -delete\
        -o -name "*.gcda" -delete\
        -o -name "*.gcno" -delete\
        -o -name "*~" -delete\
        -o -name "#*#" -delete

fclean: clean
	@rm -f $(NAME)
	make fclean -C $(LIBMY)
re: fclean all