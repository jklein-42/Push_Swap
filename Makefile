# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jklein <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 13:09:25 by jklein            #+#    #+#              #
#    Updated: 2022/07/19 21:39:47 by jklein           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

SOURCES  = 	push_swap_main.c \
					\
			./srcs/libft/ft_atoi.c \
			./srcs/libft/ft_isdigit.c \
			./srcs/libft/ft_split.c \
			./srcs/libft/ft_strlen.c \
					\
		   ./srcs/stack_logic/ft_push.c \
		   ./srcs/stack_logic/ft_reverse_rotate.c \
		   ./srcs/stack_logic/ft_rotate.c \
		   ./srcs/stack_logic/ft_swap.c \
						\
		   ./srcs/stack_origin/ft_free_stacks.c \
		   ./srcs/stack_origin/ft_is_only_numbers.c \
		   ./srcs/stack_origin/ft_is_stack_sorted.c \
		   ./srcs/stack_origin/ft_number_limits.c \
		   ./srcs/stack_origin/ft_parameters.c \
		   ./srcs/stack_origin/ft_reallocation.c \
		   ./srcs/stack_origin/ft_repeated_numbers.c \
		   ./srcs/stack_origin/ft_seperate_numbers.c \
		   ./srcs/stack_origin/ft_sort_3_numbers.c \
		   ./srcs/stack_origin/ft_sort_5_numbers.c \
		   ./srcs/stack_origin/ft_sort_beyond_3_and_5_numbers.c \
		   ./srcs/stack_origin/ft_stack_size.c \
		   
OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(SOURCES) -Iheaders -o $(NAME)

all: $(NAME)

clean:
	
	@rm -rf *.o
	@rm -rf ./srcs/libft/*.o
	@rm -rf ./srcs/stack_logic/*.o
	@rm -rf ./srcs/stack_origin/*.o
	
	@echo "CLEANING THE .o FILES"

fclean: clean
	@rm -rf $(NAME)

re: fclean all
