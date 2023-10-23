CXX = c++
NAME = a.out
INC = Fixed.hpp Point.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp \
		Fixed.cpp\
		Point.cpp \
		bsp.cpp


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