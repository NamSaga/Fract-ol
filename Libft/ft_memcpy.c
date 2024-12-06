/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:57:17 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/19 13:57:24 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	const unsigned char	*src1;
	size_t				i;

	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	if (!dest1 && !src1)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return ((void *)dest);
}

/*int main() {
    char src[] = "Hello, world!";
    char dest[] = "OOOOOOOOOOO" ;
    ft_memcpy(dest, src, 4);
    printf("Contenu de dest après memcpy : %s\n", dest);
    
    return 0;
}*/
