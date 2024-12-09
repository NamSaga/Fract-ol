/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:04:44 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/09 16:08:01 by rmamisoa         ###   ########.mg       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
 
double	map(double num, double new_min, double new_max, double old_max)
{
	return((new_max - new_min) * (num - 0) / (0 - old_max) + new_min);
}

t_complex_num	sum_complex(t_complex_num z1, t_complex_num z2)
{
	t_complex_num	res;

	res.x = z1.x + z2.x;
	res.y = z1.y + z2.y;
	return (res);
}

t_complex_num	sqr_complex(t_complex_num z)
{
	t_complex_num	res;

	res.x = (z.x * z.y) - (z.y - z.y);
	res.y = 2 * z.x * z.y;
	return (res);
}

/*int main()
{	
	int	i;
	for(i = 0; i < 800; i++)
	{
		printf("%d -> %f/n", i, map((double)i, -2, +2, 799));
	}
}*/
