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
