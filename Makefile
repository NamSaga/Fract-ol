NAME = fractol

SRC = ./src/main.c src/init.c src/map.c src/render.c src/events.c

LIBFT_DIR = ./lib/libft/libft.a 

OBJS = ${SRC:.c=.o}

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

INCLUDE = -I include

%.o: %.c
	cc $(C_FLAGS) -I/usr/include -Imlx_linux -O2 -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(LIB_OBJS)		
			@make -C ./lib/libft/		
			@make -C ./minilibx-linux/		
			cc $(CFLAGS) $(OBJS) $(INCLUDE) $(LIBFT_DIR) -L./minilibx-linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz  -o $(NAME)

clean:
		@make -C ./lib/libft/ clean
		$(RM) $(OBJS)

fclean: clean
		@make -C ./lib/libft/ fclean
		$(RM) $(NAME)



