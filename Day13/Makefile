CC=gcc
UTILS=../utils
LIBBTREE=./ED
LIBBTREENAME=btree
LIBMY=$(UTILS)/lib/my
LIBNAME=my
SRC=$(wildcard *.c ./ED/*.c ../utils/*.c)
CFLAGS=-W -Wall -L $(LIBMY) -l $(LIBNAME) -I $(UTILS) -L $(LIBBTREE) -l $(LIBBTREENAME) -I $(UTILS) -I $(UTILS)/include
OBJ = $(SRC:.c=.o)

NAME=day-13

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBMY)
	make -C $(LIBBTREE)
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
	make fclean -C $(LIBBTREE)
	make fclean -C $(LIBMY)

re: fclean all