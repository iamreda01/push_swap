CC = cc
FLAGS = -Wall -Wextra -Werror

NAME = checker_bonus
SRC = checker_bonus.c utils_bonus/ft_atoll_bonus.c \
		utils_bonus/ft_split_bonus.c utils_bonus/utils_bonus.c \
		utils_bonus/list_utils_bonus.c parsing_bonus.c \
		moves_bonus/moves_bonus.c moves_bonus/a_moves_bonus.c moves_bonus/b_moves_bonus.c moves_bonus/ab_moves_bonus.c \
		sort_bonus/sort_bonus.c sort_bonus/small_sort_bonus.c sort_bonus/tools_bonus.c \
		utils_bonus/error_bonus.c utils_bonus/bonus_utils.c\
		gnl_bonus/gnl_bonus.c gnl_bonus/gnl_utils_bonus.c 

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
%.o : %.c push_swap_bonus.h
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all