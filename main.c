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

int	main(int ac, char *av[])
{
	t_fractal	fractal;

	if ((ac == 2 && !ft_strncmp(av[1], "Mandelbrot", 10)) || (ac == 4
			&& !ft_strncmp(av[1], "Julia", 6)))
	{
		fractal.name = av[1];
		if (!(ft_strncmp(av[1], "Julia", 6)))
		{
			fractal.julia_x = atod(av[2]);
			fractal.julia_y = atod(av[3]);
		}
		init(&fractal);
		render(&fractal);
		mlx_loop(fractal.mlx);
		return (0);
	}
	else
	{
		ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
		ft_putstr_fd(ERROR_MESSAGE_ONE, STDERR_FILENO);
		ft_putstr_fd(ERROR_MESSAGE_TWO, STDERR_FILENO);
		ft_putstr_fd(ERROR_MESSAGE_THREE, STDERR_FILENO);
		ft_putstr_fd(ERROR_MESSAGE_FOUR, STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}
