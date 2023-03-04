# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 14:11:44 by oboutarf          #+#    #+#              #
#    Updated: 2023/03/04 14:26:44 by oboutarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie

SRC			=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

FLAGS		=	-Wall -Wextra -Werror -g3 -I. -std=c++98

EXE_NAME	=	-o zombie

EXEC		=	zombie


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


# //  Operator OverLoad
# // std::ostream& operator<<(std::ostream& os, const Contact& dt)
# // {
# //     os << dt.mo << '/' << dt.da << '/' << dt.yr;
# //     return os;
# // }