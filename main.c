/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:39:33 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/09 15:31:57 by rmamisoa         ###   ########.mg       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int main(int ac, char *av[])
{
	t_fractal	fractal;
	if (ac == 2 && (!(ft_strncmp(av[1], "mandelbrot", 10)) || !(ft_strncmp(av[1], "julia", 5))))
	{
		fractal.name = av[1];
		init(&fractal);
		render(&fractal);
		mlx_loop(fractal.mlx);
		return (0);
	}
	else 
	{
		ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}
