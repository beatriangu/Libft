/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:48:47 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/14 10:28:37 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <ctype.h>
//#include <stdio.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;
	int	result1;
	int	result2;

	c = '2';
	result1 = isalnum(c);
	result2 = ft_isalnum(c);
	if (result1 == 0)
	{
		printf("No es un valor alfanúmerico\n");
	}
	else
	{
		printf("Si es un valor alfanúmerico\n");
	}
	if (result2 == 0)
	{
		printf("No es un valor alfanúmerico\n");
	}
	else
	{
		printf("Si es un valor alfanúmerico");
	}
	return (0);
}*/
