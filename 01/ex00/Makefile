CXX = c++
NAME = zombie
INC = Zombie.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp \
	Zombie.cpp \
	newZombie.cpp\
	randomChump.cpp

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