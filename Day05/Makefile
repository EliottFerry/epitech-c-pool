CC=gcc
UTILS=../utils
LIBMY=$(UTILS)/lib/my
LIBNAME=my
SRC=$(wildcard *.c ../utils/*.c)
CDFLAGS=-W -Wall -Werror -L $(LIBMY) -l $(LIBNAME) 
OBJ = $(SRC:.c=.o)

NAME=day-04

all: $(NAME)

$(NAME): $(OBJ)
	@cd $(UTILS)/lib/my; \
        ./build.sh
	@$(CC) -o $(NAME) $(SRC) $(CDFLAGS)

clean:
	@find . $(UTILS) -name "*.o" -delete\
        -o -name "valgrind*" -delete\
        -o -name "*.gcda" -delete\
        -o -name "*.gcno" -delete\
        -o -name "*~" -delete\
        -o -name "#*#" -delete

fclean: clean
	@rm $(NAME)

re: fclean all