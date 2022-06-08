NAME = libftprintf.a

CC = gcc -Wall -Werror -Wextra
VALGRIND = valgrind -q --leak-check=full --track-origins=yes --verbose

SRC_DIRS = src
OBJ_DIR = obj

SRC := ft_printf.c
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:%.c=%.o))
DEPS = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	@ar x libft/libft.a
	ar rcs $@ $^ *.o
	rm -f *.o

test: $(NAME) main.c
	@$(CC) main.c -L. -lftprintf && $(VALGRIND) ./a.out && rm a.out

$(OBJ_DIR)/%.o : $(SRC_DIRS)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
