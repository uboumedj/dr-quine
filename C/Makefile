NAME_C = Colleen
NAME_G = Grace
NAME_S = Sully

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRC_C = Colleen.c
SRC_G = Grace.c
SRC_S = Sully.c

OBJ_C = $(SRC_C:.c=.o)
OBJ_G = $(SRC_G:.c=.o)
OBJ_S = $(SRC_S:.c=.o)

.PHONY: re all clean fclean

all: $(NAME_C) $(NAME_G) $(NAME_S)

$(NAME_C): $(OBJ_C)
	@ $(CC) $(CFLAGS) -o $(NAME_C) $(SRC_C)

$(NAME_G): $(OBJ_G)
	@ $(CC) $(CFLAGS) -o $(NAME_G) $(SRC_G)

$(NAME_S): $(OBJ_S)
	@ $(CC) $(CFLAGS) -o $(NAME_S) $(SRC_S)

clean:
	@rm -rf $(OBJ_C) $(OBJ_G) $(OBJ_S)
	@echo "\033[1;34mDr Quine C\033[1;33m obj files removed\t\033[1;31m✓\033[0m"

fclean: clean
	@rm -rf  $(NAME_C) $(NAME_G) $(NAME_S) Sully_* Grace_kid.c
	@echo "\033[1;34mDr Quine C\033[1;33m files deleted\t\t\033[1;31m✓\033[0m"

re: fclean all
