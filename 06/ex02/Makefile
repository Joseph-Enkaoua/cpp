NAME		= type
SRCS		= main.cpp Base.cpp
OBJS		= ${SRCS:.cpp=.o}
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: flcean all

.PHONY: all clean fclean re