NAME = Animal
CXX = c++
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

INC = Animal.hpp Brain.hpp Dog.hpp Cat.hp

SRCS =    main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJT = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJT)
	$(CXX) $(CFLAGS) $(OBJT) -o $(NAME)

%.o: %.cpp  $(INC)
	$(C) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJT)
fclean: clean
	$(RM) $(NAME)
re:    fclean all

.PHONY: all fclean clean re
