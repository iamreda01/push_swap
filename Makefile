CC = cc

FLAGS = -Wall -Wextra -Werror 

NAME = push_swap
BONUS = checker_bonus

SRC = mandatory/push_swap.c mandatory/utils/ft_atoll.c mandatory/utils/ft_split.c \
		mandatory/utils/utils.c mandatory/utils/list_utils.c mandatory/parsing.c \
		mandatory/moves/moves.c mandatory/moves/a_moves.c mandatory/moves/b_moves.c mandatory/moves/ab_moves.c \
		mandatory/sort/sort.c mandatory/sort/small_sort.c mandatory/sort/tools.c mandatory/utils/error.c

BSRC = bonus/checker_bonus.c bonus/utils_bonus/ft_atoll_bonus.c \
		bonus/utils_bonus/ft_split_bonus.c bonus/utils_bonus/utils_bonus.c \
		bonus/utils_bonus/list_utils_bonus.c bonus/parsing_bonus.c \
		bonus/moves_bonus/moves_bonus.c bonus/moves_bonus/a_moves_bonus.c bonus/moves_bonus/b_moves_bonus.c bonus/moves_bonus/ab_moves_bonus.c \
		bonus/sort_bonus/sort_bonus.c bonus/sort_bonus/small_sort_bonus.c bonus/sort_bonus/tools_bonus.c \
		bonus/utils_bonus/error_bonus.c bonus/utils_bonus/bonus_utils.c\
		bonus/gnl_bonus/gnl_bonus.c bonus/gnl_bonus/gnl_utils_bonus.c 

OBJ = $(SRC:.c=.o)
BOBJ = $(BSRC:.c=.o)


all : $(NAME)

bonus : $(BONUS)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

$(BONUS) : $(BOBJ)
	$(CC) $(FLAGS) -o $(BONUS) $(BOBJ)

mandatory/%.o : mandatory/%.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

bonus/%.o : bonus/%.c push_swap_bonus.h
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	rm -f $(OBJ) $(BOBJ)
fclean : clean
	rm -f $(NAME) $(BONUS)
re : fclean all