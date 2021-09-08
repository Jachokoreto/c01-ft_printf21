NAME = libftprintf.a

CC = gcc -Wall -Werror -Wextra
VALGRIND = valgrind -q --leak-check=full --track-origins=yes --verbose

SRC_DIR = ./src
OBJ_DIR = ./obj

SRC := $(shell find $(SRC_DIR) -name "*.c" -execdir basename {} \;)
OBJ := $(SRC:%.c=$(OBJ_DIR)/%.o)
DEPS = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@cp libft/libft.a ./$(NAME)
	ar rcs $@ $^

test: $(NAME) main.c
	@$(CC) main.c -L. -lftprintf && $(VALGRIND) ./a.out && rm a.out

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(DEPS)
	@mkdir -p $(OBJ_DIR)
	@$(CC) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
