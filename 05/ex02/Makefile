CXX = c++
NAME = game
INC = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp \
	AForm.cpp \
	Bureaucrat.cpp \
	ShrubberyCreationForm.cpp \


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