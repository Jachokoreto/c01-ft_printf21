NAME = libft.a

CC = gcc -Wall -Werror -Wextra

SRCS := $(shell find . ! -name ft_lst\* -name ft\*.c)
BONUS_SRCS := $(shell find . -name ft_lst\*.c)
DEPS = libft.h

all: $(NAME)

$(NAME): $(SRCS:.c=.o)
	@ar rcs $@ $^

bonus: $(BONUS_SRCS:.c=.o)
	@ar rcs $(NAME) $^
	
%.o: %.c $(DEPS)
	@$(CC) -c $<

so:
	$(CC) -nostartfiles -fPIC $(SRCS) $(BONUS_SRCS)
	gcc -nostartfiles -shared -o libft.so *.o

test: $(NAME) bonus
	@$(CC) test.c -L. -lft && ./a.out

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all

