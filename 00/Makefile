CXX = g++
NAME = Test
FLAGS = -Wall -Wextra -Werror
SRC = Test.cpp \
		main.cpp

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) $^ -o $@ 

