/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:12:22 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/23 10:12:24 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (!big && !little)
		return (0);
	if (!little[0] || little == big)
		return ((char *)big);
	while (big[i] && c < len)
	{
		c = 0;
		while (big[i + c] == little[c] && i + c < len)
		{
			if (little[c + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			c++;
		}
		if (little[c] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (0);
}
