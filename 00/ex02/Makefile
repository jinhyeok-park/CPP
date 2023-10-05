CXX = c++
NAME = account
FLAGS = -Wall -Wextra -Werror -std=c++98
INC = Account.hpp
SRC = Account.cpp\
		tests.cpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) $^ -o $@

%.o : %.cpp $(INC)
	$(CXX) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean
	make all

.PHONY: all clean fclean re