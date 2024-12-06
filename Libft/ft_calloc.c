/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:21:36 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/29 15:21:38 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (nmemb * size));
	if (!dest)
	{
		return (NULL);
	}
	while (i < nmemb * size)
	{
		dest[i] = 0;
		i++;
	}
	return ((void *)dest);
}
