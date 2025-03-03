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
