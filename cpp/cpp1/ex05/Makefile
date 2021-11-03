NAME = Karen

SRC =	main.cpp\
		Karen.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++

FLAGS = -Wall -Werror -Wextra

SANITIZE = -fsanitize=address -g3

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(SRC) -I. -o $(NAME)

f:
	$(CC) $(FLAGS) $(SRC) -I. $(SANITIZE) -o $(NAME)

s:
	$(CC) $(SRC) -I. $(SANITIZE) -o $(NAME)

clean:
	rm -rf *.o
	rm -rf a.out
	rm -rf a.out*

fclean: clean
	rm -rf $(NAME)
	rm -rf $(NAME).dSYM

re: fclean all

.PHONY:	all clean fclean bonus re
