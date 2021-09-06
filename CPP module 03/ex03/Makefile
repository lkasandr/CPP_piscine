NAME = a.out

SRCS = ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp ./FragTrap.cpp ./DiamondTrap.cpp

HEADER =	./ClapTrap.hpp ./ScavTrap.hpp ./FragTrap.hpp ./DiamondTrap.hpp

OBJS = $(SRCS:cpp=o)

%.o:		%.cpp $(HEADER)
			${CLANG} $(CPPFLAGS) -c $< -o ${<:.cpp=.o}

CLANG =		clang++
CPPFLAGS =	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
RM =		rm -f

all :		${NAME}

$(NAME) :	$(OBJS) 
			$(CLANG) $(CPPFLAGS) -o ${NAME} $(OBJS) -I.

clean :		
			$(RM) $(OBJS)

fclean 	:	clean
			$(RM) ${NAME}

re :		fclean all

.PHONY :	all clean fclean re 