# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejommy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 20:09:01 by ejommy            #+#    #+#              #
#    Updated: 2019/04/02 20:14:36 by ejommy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone_book
CLANG = clang++ -Wall -Wextra -Werror
SRC = Contact.class.cpp \
	  main.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CLANG) -o $@ $(OBJ)

$(OBJ): %.o : %.cpp
	$(CLANG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
