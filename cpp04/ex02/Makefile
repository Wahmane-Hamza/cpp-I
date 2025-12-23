NAME = Brain
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRC = ./src
INCL = ./include
INCLUDES = -I$(INCL)

SRCS =	$(SRC)/AAnimal.cpp $(SRC)/Cat.cpp $(SRC)/Dog.cpp $(SRC)/WrongCat.cpp $(SRC)/WrongAAnimal.cpp $(SRC)/main.cpp $(SRC)/Brain.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCL)/AAnimal.hpp $(INCL)/Cat.hpp $(INCL)/Dog.hpp $(INCL)/WrongCat.hpp $(INCL)/WrongAAnimal.hpp $(INCL)/Brain.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@ $(INCLUDES)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
