NAME		= easyfind
SRC			= main.cpp
OBJ			= ${SRC:.c=.o}
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJ)

flcean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
