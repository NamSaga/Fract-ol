/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:49:34 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/18 18:10:00 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	merror(void)
{
	exit(EXIT_FAILURE);
}

void	data_init(t_fractal *fractal)
{
	fractal->esc_val = 4;
	fractal->i = 42;
	fractal->shift_x = 0.0;
	fractal->shift_y = 0.0;
	fractal->zoom = 1.0;
}

static void	event_init(t_fractal *fractal)
{
	mlx_hook(fractal->win, KeyPress, KeyPressMask, key_handle, fractal);
	mlx_hook(fractal->win, ButtonPress, ButtonPressMask, mouse_handle, fractal);
	mlx_hook(fractal->win, DestroyNotify, StructureNotifyMask, x_handle,
		fractal);
}

void	init(t_fractal *fractal)
{
	fractal->mlx = mlx_init();
	if (fractal->mlx == NULL)
		merror();
	fractal->win = mlx_new_window(fractal->mlx, WIDTH, HEIGHT, fractal->name);
	if (fractal->mlx == NULL)
	{
		mlx_destroy_display(fractal->mlx);
		free(fractal->mlx);
		merror();
	}
	fractal->img.img_ptr = mlx_new_image(fractal->mlx, WIDTH, HEIGHT);
	if (fractal->img.img_ptr == NULL)
	{
		mlx_destroy_window(fractal->mlx, fractal->win);
		mlx_destroy_display(fractal->mlx);
		free(fractal->mlx);
		merror();
	}
	fractal->img.pxl_ptr = mlx_get_data_addr(fractal->img.img_ptr,
			&fractal->img.bytes, &fractal->img.len, &fractal->img.end);
	event_init(fractal);
	data_init(fractal);
}
