/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:25:43 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/21 16:27:05 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)s;
	while (i < n)
	{
		s1[i] = 0;
		i++;
	}
}

/*int main() 
{
    char buffer[] = "Bonjour";
    
    bzero(buffer, 4);
    
    printf("Contenu de buffer après bzero : %s\n", buffer);
    return 0;
}*/
