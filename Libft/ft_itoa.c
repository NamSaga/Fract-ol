/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 06:58:47 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/27 06:58:50 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/
#include "libft.h"

static int	get_len(int nb)
{
	int	n;

	n = 0;
	if (nb <= 0)
		n++;
	while (nb)
	{
		nb /= 10;
		n++;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		pos;

	len = get_len(n);
	pos = len - 1;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	if (n < 0)
		result[0] = '-';
	while (n)
	{
		if (n < 0)
			result[pos--] = (~(n % 10) + 1) + '0';
		else
			result[pos--] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}

/*int	main()🤫️
{
	printf("%s", ft_itoa(-22));
}*/
