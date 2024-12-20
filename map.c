/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:04:44 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/18 16:14:00 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double	map(double num, double new_min, double new_max, double old_max)
{
	return ((new_max - new_min) * (num - 0) / (old_max - 0) + new_min);
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

	res.x = (z.x * z.x) - (z.y * z.y);
	res.y = 2 * z.x * z.y;
	return (res);
}

double	atod(char *s)
{
	long	itgr;
	double	frct;
	double	pwr;
	int		sign;

	itgr = 0;
	frct = 0;
	sign = +1;
	pwr = 1;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	while (*s == '+' || *s == '-')
		if (*s++ == '-')
			sign = -sign;
	while (*s && *s != '.')
		itgr = (itgr * 10) + (*s++ - 48);
	if (*s == '.')
		++s;
	while (*s)
	{
		pwr /= 10;
		frct = frct + (*s++ - 48) * pwr;
	}
	return ((itgr + frct) * sign);
}
