/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:23:05 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/18 18:01:32 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
//#include <stdio.h>

int	x_handle(t_fractal *fractal)
{
	mlx_destroy_image(fractal->mlx, fractal->img.img_ptr);
	mlx_destroy_window(fractal->mlx, fractal->win);
	mlx_destroy_display(fractal->mlx);
	free(fractal->mlx);
	exit(0);
}

int	mouse_handle(int button, int x, int y, t_fractal *fractal)
{
	(void) x;
	(void) y;
	//printf("%d\n", button);
	if (button == Button5)
		fractal->zoom *= 0.95;
	else if (button == Button4)
		fractal->zoom *= 1.05;
	render(fractal);
	return (0);
}

int	key_handle(int keysym, t_fractal *fractal)
{
	//printf("%d\n", keysym);
	if (keysym == XK_Escape)
		x_handle(fractal);
	render(fractal);
	return (0);
}
