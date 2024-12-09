/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:05:16 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/23 16:05:18 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*tab;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	while (start > end)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]) && s1[end])
		end--;
	tab = malloc(sizeof(char) * (end - start) + 2);
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, &s1[start], end - start + 2);
	return (tab);
}

/*int	main(void)
{
	char *s1 = "  bonjurob  ";
	char *set = " ";
	char *trimmed = ft_strtrim(s1, set);
	printf("%s", trimmed);
	return (0);
}*/
