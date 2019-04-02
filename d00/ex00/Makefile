# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejommy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 15:26:07 by ejommy            #+#    #+#              #
#    Updated: 2019/04/02 16:02:41 by ejommy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CLANG = clang++ -Wall -Wextra -Werror
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CLANG) $(OBJ) -o $@

$(OBJ): %.o : %.cpp
	$(CLANG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
