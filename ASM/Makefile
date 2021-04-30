NAME_C = Colleen
NAME_G = Grace
NAME_S = Sully

CC = gcc

SRC_C = Colleen.s
SRC_G = Grace.s
SRC_S = Sully.s

OBJ_C = $(SRC_C:.s=.o)
OBJ_G = $(SRC_G:.s=.o)
OBJ_S = $(SRC_S:.s=.o)

.PHONY: re all clean fclean

%.o: %.s
	nasm -f elf64 $<

all: $(NAME_C) $(NAME_G) $(NAME_S)

$(NAME_C): $(OBJ_C)
	@ $(CC) -o $(NAME_C) $(OBJ_C)

$(NAME_G): $(OBJ_G)
	@ $(CC) -o $(NAME_G) $(OBJ_G)

$(NAME_S): $(OBJ_S)
	@ $(CC) -o $(NAME_S) $(OBJ_S)

clean:
	@rm -rf $(OBJ_C) $(OBJ_G) $(OBJ_S)
	@echo "\033[1;34mDr Quine ASM\033[1;33m obj files removed\t\033[1;31m✓\033[0m"

fclean: clean
	@rm -rf  $(NAME_C) $(NAME_G) $(NAME_S) Sully_* Grace_kid.s
	@echo "\033[1;34mDr Quine ASM\033[1;33m files deleted\t\t\033[1;31m✓\033[0m"

re: fclean all