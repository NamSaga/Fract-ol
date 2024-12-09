/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:59:31 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/20 09:59:33 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;
	size_t				i;

	s1 = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
			return ((void *)(s1 + i));
		i++;
	}
	return (NULL);
}

/*int main() 
{
	char buffer[] = "MAMAMIAqaA";    
	char *result = ft_memchr(buffer, 'a', sizeof(buffer));
	printf("Occurrence de 'a' trouvée à l'indice : %s\n", result );
    
    return 0;
}*/
