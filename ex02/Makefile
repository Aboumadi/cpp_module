NAME = zombie

CXX = c++

SRC = Zombie.cpp main.cpp ZombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re