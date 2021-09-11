NAME = animal

SRCS = ./AMateria.cpp ./Character.cpp ./Cure.cpp ./Ice.cpp ./main.cpp ./MateriaSource.cpp

HEADER = ./Ice.hpp ./ICharacter.hpp ./Cure.hpp ./Character.hpp ./AMateria.hpp ./IMateriaSource.hpp ./MateriaSource.hpp

OBJS = $(SRCS:cpp=o)

%.o:		%.cpp $(HEADER)
			${CLANG} $(CPPFLAGS) -c $< -o ${<:.cpp=.o}

CLANG =		clang++
CPPFLAGS =	-Wall -Wextra -Werror -std=c++98
RM =		rm -f

all :		${NAME}

$(NAME) :	$(OBJS) 
			$(CLANG) $(CPPFLAGS) -o ${NAME} $(OBJS)

clean :		
			$(RM) $(OBJS)

fclean 	:	clean
			$(RM) ${NAME}

re :		fclean all

.PHONY :	all clean fclean re 