/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:41:34 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/14 10:46:41 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int	main(void)

{
	int	c;
	int	result1;
	int result2;
	c = '2';
	result1 = isalpha(c);
	result2 = ft_isalpha(c);
	if (result1 == 1)
	{
		printf("Es una letra: %c\n",c);
	}
	else
	{
		printf("No es una letra\n");
	}
	if (result2 == 1)
	{

		printf("Es una letra,%c\n",c);
	}
	else
	{
		printf("No es una letra\n");
	}
	return (0);
}*/
