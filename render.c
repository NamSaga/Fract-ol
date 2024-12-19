/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:21:18 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/18 16:05:56 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	put_pxl(int x, int y, t_image *img, int color)
{
	int	offset;

	offset = (y * img->len) + (x * (img->bytes / 8));
	*(unsigned int *)(img->pxl_ptr + offset) = color;
}

static void	handle_pixel(int x, int y, t_fractal *fractal)
{
	t_complex_num	z;
	t_complex_num	c;
	int				i;
	int				color;

	i = 0;
	z.x = 0.0;
	z.y = 0.0;

	c.x = map(x, -2, +2, WIDTH) * fractal->zoom;
	c.y = map(y, +2, -2, HEIGHT) * fractal->zoom;
	while (i < fractal->i)
	{
		z = sum_complex(sqr_complex(z), c);
		if (((z.x * z.x) + (z.y * z.y)) > fractal->esc_val)
		{
			color = map(i, BLACK, WHITE, fractal->i);
			put_pxl(x, y, &fractal->img, color);
			return ;
		}
		++i;
	}
	put_pxl(x, y, &fractal->img, NEON_ORANGE);
}

void	render(t_fractal *fractal)
{
	int	x;
	int	y;

	y = 0;
	while (y++ < HEIGHT)
	{
		x = 0;
		while (x++ < WIDTH)
		{
			handle_pixel(x, y, fractal);
		}
	}
	mlx_put_image_to_window(fractal->mlx, fractal->win, fractal->img.img_ptr, 0,
		0);
}
