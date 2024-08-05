/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:27:09 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/22 14:30:28 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	int	c;
	int	result1;
	int	result2;

	c = 'm';
	result1 = isdigit(c);
	result2 = ft_isdigit(c);
	if (result1 == 1)
	{
		printf("Es un digito\n");
	}
	else
	{
		printf("No es un digito\n");
	}
	if (result2 == 1)
	{
		printf("Es un digito\n");
	}
	else
	{
		printf("No es un digito\n");
	}
	return (0);
}*/
