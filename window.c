/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:18:16 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/04 15:41:14 by rmamisoa         ###   ########.mg       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx-linux/mlx.h"
#include <X11/X.h>
#include <X11/keysym.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

/*int	key_hook(int keycode, t_vars *vars)
{
	printf("%d\n", keycode);
	return(0);
}

int	mouse_hook(int keycode, t_vars *vars)
{
	printf("%d\n", keycode);
	return(0);
}*/

int	close(t_vars *vars)
{
	mlx_destroy_window(vars->mlx, vars->win);
	exit(0);
	return (0);
}

int	handle_input(int keysym, t_vars *vars)
{
	if (keysym == XK_Escape) 
	{
		mlx_destroy_window(vars->mlx, vars->win);
		//mlx_destroy_display(vars->mlx);
		//free(vars->mlx);
		exit(0);
	}
	return 0;
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 500, 500, "Hello world!");
	mlx_hook(vars.win, 17, 0, close, &vars);
	//mlx_key_hook(vars.win, 
    //            handle_input, 
    //            &vars);
	mlx_hook(vars.win, KeyPress, KeyPressMask, handle_input, &vars);
	//mlx_key_hook(vars.win, key_hook, &vars);
	//mlx_mouse_hook(vars.win, mouse_hook, &vars);
	mlx_loop(vars.mlx);
}
