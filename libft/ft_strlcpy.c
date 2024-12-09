/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:39:51 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/20 15:39:52 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(src);
	if ((!dst || !src) || size == 0)
	{
		return (len);
	}
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*int main() 
{
    char src[] = "Hello, world!";
    char dst[] = "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
    
    size_t len = ft_strlcpy(dst, src, 5);

    printf("Copied string: %s\n", dst);
    printf("Length of copied string: %zu\n", len);

    return 0;
}*/
