# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgallois <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 13:19:21 by vgallois          #+#    #+#              #
#    Updated: 2021/12/14 20:00:13 by vgallois         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= claptrap

SRC		= main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp\

OBJ		= $(addprefix $(OBJDIR),$(SRC:.cpp=.o))

CC		= clang++
CFLAGS	= -g -Wall -Wextra -Werror -pedantic

SRCDIR	= ./
INCDIR	= ./
OBJDIR	= ./obj/

all: obj $(FT_LIB) $(MLX_LIB) $(NAME)	

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.cpp
	$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

$(FT_LIB):
	make -C 

$(NAME): $(OBJ)
	$(CC) $(OBJ) -lm -o $(NAME)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:all clean fclean re
