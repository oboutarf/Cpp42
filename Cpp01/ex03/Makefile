# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 14:11:44 by oboutarf          #+#    #+#              #
#    Updated: 2023/03/04 22:23:26 by oboutarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	weapon_club

SRC			=	main.cpp \
				HumanA.cpp \
				HumanB.cpp \
				Weapon.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

FLAGS		=	-Wall -Wextra -Werror -g3 -I. -std=c++98

EXE_NAME	=	-o weapon_club

EXEC		=	weapon_club


all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all
