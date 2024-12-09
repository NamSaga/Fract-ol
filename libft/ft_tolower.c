/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:14:52 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/02/20 11:14:57 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c += 32);
	}
	else
		return (c);
}

/*int	main()
{
	char ch = tolower('m');
	printf("%c", ch);
}*/
