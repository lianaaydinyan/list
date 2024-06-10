NAME = single_list
SRC = main.cpp
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++11
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

RM = rm -rf

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re