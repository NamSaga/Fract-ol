/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:03:27 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/23 13:03:29 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*ss;

	s = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while ((s[i] || ss[i]) && i < n)
	{
		if (s[i] != ss[i])
			return (s[i] - ss[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_strncmp("hELLO", "hiLLO", 0));
}*/
