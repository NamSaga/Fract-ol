/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:54:32 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/23 14:54:34 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lens;
	char	*dest;

	i = 0;
	lens = ft_strlen(s);
	if (start > lens)
		return (ft_strdup(""));
	if (lens - start < len)
		len = lens - start;
	dest = malloc (sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (i < start)
	{
		i++;
	}
	i = 0;
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main()
{
	printf("%s", ft_substr("Irandria", 3, 10));
}*/
