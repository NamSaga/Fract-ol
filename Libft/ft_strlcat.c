/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:55:15 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/20 13:55:19 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <bsd/string.h>*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	total_length;

	i = 0;
	j = ft_strlen(src);
	k = ft_strlen(dst);
	total_length = j + k;
	if (!dst && size == 0)
	{
		return (j);
	}
	if (k >= size)
	{
		return (size + j);
	}
	while (src[i] && (k + 1 < size))
	{
		dst[k] = src[i];
		k++;
		i++;
	}
	dst[k] = '\0';
	return (total_length);
}

/*int main() {
    char destination[] = "1adasd2";
    const char *source = " ";
    size_t result_length = ft_strlcat(destination, source, 2);

    printf("Destination après ft_strlcat: %s\n", destination);
    printf("Longueur totale de la chaîne résultante : %zu\n", result_length);

    return 0;
}*/
