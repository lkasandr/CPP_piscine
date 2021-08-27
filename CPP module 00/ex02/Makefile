# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkasandr <lkasandr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 10:02:41 by lkasandr          #+#    #+#              #
#    Updated: 2021/08/25 16:25:27 by lkasandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		account
SRCS =		./Account.cpp ./tests.cpp


HEADER =	./Account.hpp

OBJS =		$(SRCS:cpp=o)

%.o:		%.cpp $(HEADER)
			${CC} $(CFLAGS) -c $< -o ${<:.cpp=.o}

CC =		clang++
CFLAGS =	-Wall -Wextra -Werror
OPTFLAGS =  -std=c++98
RM =		rm -f

all :		${NAME}

$(NAME) :	$(OBJS) 
			$(CC) $(CFLAGS) $(OPTFLAGS) -o ${NAME} $(OBJS) -I$(HEADER)

clean :		
			$(RM) $(OBJS)

fclean 	:	clean
			$(RM) ${NAME}

re :		fclean all

.PHONY :	all clean fclean re 