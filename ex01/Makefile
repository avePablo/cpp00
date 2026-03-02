NAME = phonebook

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = phonebook.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re