# NAME = animal

# CXX = c++

# SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp

# INC = Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp

# OBJ = $(SRC:.cpp=.o)

# RM = rm -f

# CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

# all: $(NAME) $(INC)

# $(NAME): $(OBJ) $(INC)
# 	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

# clean:
# 	$(RM) $(OBJ)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean $(NAME)

# .PHONY: all clean fclean re

NAME = Animal
C = c++
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

INC = Animal.hpp WrongAnimal.hpp Dog.hpp Cat.hpp WrongCat.hpp

SRCS =    main.cpp Animal.cpp WrongAnimal.cpp Dog.cpp Cat.cpp WrongCat.cpp

OBJT = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJT)
	$(C) $(CFLAGS) $(OBJT) -o $(NAME)

%.o: %.cpp  $(INC)
	$(C) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJT)
fclean: clean
	$(RM) $(NAME)
re:    fclean all

.PHONY: all fclean clean re
