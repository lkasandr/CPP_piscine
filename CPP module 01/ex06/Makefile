# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkasandr <lkasandr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 10:02:41 by lkasandr          #+#    #+#              #
#    Updated: 2021/08/31 13:21:03 by lkasandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karenFilter

SRCS = ./main.cpp ./Karen.cpp

HEADER = ./Karen.hpp

OBJS = $(SRCS:cpp=o)

%.o:		%.cpp $(HEADER)
			${CLANG} $(CPPFLAGS) -c $< -o ${<:.cpp=.o}

CLANG =		clang++
CPPFLAGS =	-Wall -Wextra -Werror -std=c++98
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