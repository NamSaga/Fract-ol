/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:57:03 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/20 09:01:54 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s11;
	const unsigned char	*s21;
	size_t				i;

	s11 = (const unsigned char *)s1;
	s21 = (const unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		if (s11[i] != s21[i])
			return ((int)s11[i] - s21[i]);
		i++;
	}
	return (0);
}

/*int	main()
{
	char s1[] = "sama";
	char s2[] = "Mada";
	
	printf("%d", ft_memcmp(s1, s2, 0));
	
}*/
