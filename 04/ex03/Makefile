CXX = c++
NAME = game
INC = AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp \
	AMateria.cpp\
	Ice.cpp\
	Cure.cpp\
	ICharacter.cpp\
	Character.cpp\
	IMateriaSource.cpp\
	MateriaSource.cpp

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