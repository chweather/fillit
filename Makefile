NAME	= fillit
SRCS	= f_main.c f_map.c f_map_check.c f_output_map.c \
		f_solve.c f_sqrt.c f_tetri.c f_top_left.c \
		f_verify_tetri.c f_functions.c\

OBJ		= $(SRCS:.c=.o)

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) -o $(NAME) $(OBJ)

clean:
	@ rm -rf $(OBJ)

fclean: clean
	@ rm -rf ./$(NAME)

re: fclean all
