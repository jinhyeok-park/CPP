CXX = c++
NAME = TypeInspector
INC = A.hpp B.hpp C.hpp Base.hpp TypeInspector.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp \
	A.cpp \
	B.cpp \
	C.cpp \
	Base.cpp \
	TypeInspector.cpp \

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