/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 11:00:09 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/18 18:01:36 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "X11/X.h"
# include "../lib/libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include <X11/keysym.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define WIDTH 800
# define HEIGHT 800

# define BLACK 0x000000
# define WHITE 0xFFFFFF
# define RED 0xFF0000
# define GREEN 0x00FF00
# define BLUE 0x0000FF

# define MAGENTA_BURST 0xFF00FF
# define LIME_SHOCK 0xCCFF00
# define NEON_ORANGE 0xFF6600
# define PSYCHEDELIC_PURPLE 0x660066
# define AQUA_DREAM 0x33CCCC
# define HOT_PINK 0xFF66B2
# define ELECTRIC_BLUE 0x0066FF
# define LAVA_RED 0xFF3300

typedef struct s_image
{
	void		*img_ptr;
	char		*pxl_ptr;
	int			bytes;
	int			end;
	int			len;
}				t_image;

typedef struct s_complex_num
{
	double		x;
	double		y;
}				t_complex_num;

typedef struct s_fractal
{
	char		*name;
	void		*mlx;
	void		*win;
	t_image		img;
	double		esc_val;
	int			i;
	double		shift_x;
	double		shift_y;
	double		zoom;
	double		julia_x;
	double		julia_y;
}				t_fractal;

# define ERROR_MESSAGE "\e[31mINVALID ARG!\e[0m\n"
# define ERROR_MESSAGE_ONE "Chose between"
# define ERROR_MESSAGE_TWO "\e[32m mandelbrot\e[0m"
# define ERROR_MESSAGE_THREE " || "
# define ERROR_MESSAGE_FOUR "\e[32mjulia [r] [i]\e[0m as set.\n"

void			init(t_fractal *fractal);
void			render(t_fractal *fractal);

double			map(double num, double new_min, double new_max, double old_max);
t_complex_num	sqr_complex(t_complex_num z);
t_complex_num	sum_complex(t_complex_num z1, t_complex_num z2);

int				x_handle(t_fractal *fractal);
int				key_handle(int keysym, t_fractal *fractal);
int				mouse_handle(int button, int x, int y, t_fractal *fractal);
double			atod(char *s);

#endif
