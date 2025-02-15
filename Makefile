CC = cc
FLAGS = -Wall -Wextra -Werror

NAME = push_swap
SRC = push_swap.c utils/ft_atoll.c utils/ft_split.c utils/utils.c utils/list_utils.c moves/moves.c sort/sort.c sort/small_sort.c sort/tools.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
%.o : %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all