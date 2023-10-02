CXX = g++
NAME = phonebook
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = PhoneBook.cpp\
		testmain.cpp\
		Contact.cpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) $^ -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean
	make all

.PHONY: all clean fclean re