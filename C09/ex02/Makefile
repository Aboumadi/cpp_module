NAME = PmergeMe
CXX = c++
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98

INC = RPN.hpp

SRCS = main.cpp PmergeMe.cpp

OBJT = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJT)
	$(CXX) $(CFLAGS) $(OBJT) -o $(NAME)

%.o: %.cpp  $(INC)
	$(CXX) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJT)
fclean: clean
	$(RM) $(NAME)
re:    fclean all

.PHONY: all fclean clean re