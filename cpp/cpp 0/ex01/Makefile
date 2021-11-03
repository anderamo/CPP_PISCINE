NAME = mi_libro_luna_de_pluton

SRC = mi_libro_luna_de_pluton.cpp\

OBJ = $(SRC:.cpp=.o)

CC = clang++

FLAGS = -Wall -Werror -Wextra

SANITIZE = -fsanitize=address -g3

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(SRC) $(SANITIZE) -o $(NAME)

clean:
	rm -rf *.o
	rm -rf a.out
	rm -rf a.out*

fclean: clean
	rm -rf $(NAME)
	rm -rf $(NAME).dSYM

re: fclean all

.PHONY:	all clean fclean bonus re
