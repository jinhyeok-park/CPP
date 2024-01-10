CXX = c++
NAME = game
INC = Bureaucrat.hpp Form.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp \
	Form.cpp \
	Bureaucrat.cpp \

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

.PHONY : all clean fclean re