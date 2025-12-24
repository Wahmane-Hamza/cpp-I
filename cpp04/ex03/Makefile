NAME = Brain
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRC = ./src
INCL = ./include
INCLUDES = -I$(INCL)

SRCS =	$(SRC)/AMateria.cpp $(SRC)/Ice.cpp $(SRC)/Cure.cpp $(SRC)/Character.cpp $(SRC)/MateriaSource.cpp  $(SRC)/main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCL)/AMateria.hpp $(INCL)/Ice.hpp $(INCL)/Cure.hpp $(INCL)/Character.hpp $(INCL)/ICharacter.hpp $(INCL)/MateriaSource.hpp $(INCL)/IMateriaSource.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@ $(INCLUDES)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
