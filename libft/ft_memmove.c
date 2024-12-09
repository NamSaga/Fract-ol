/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:54:30 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/19 15:54:36 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	const unsigned char	*src1;
	size_t				i;

	i = 0;
	if (!dest && !src)
	{
		return (0);
	}
	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	if (dest1 > src1)
	{
		while (n--)
			dest1[n] = src1[n];
	}
	else
	{
		while (n--)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}

/*int main() {
    char src[] = "1234";
    char dest[] = "5678"; // Par exemple, un tableau de 20 caractères

    ft_memmove(dest, src, 2);
    printf("Contenu de dest après memmove : %s\n", dest);
    
    return 0;
}*/
