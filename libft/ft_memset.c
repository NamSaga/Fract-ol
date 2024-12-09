/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:21:39 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/19 13:21:41 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int main() 
{
    char buffer[] = "Bonjour";
    
    ft_memset(buffer, 'A', 4);
    
    printf("Contenu de buffer après ft_memset : %s\n", buffer);
    
    return 0;
}*/
