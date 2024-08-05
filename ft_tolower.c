/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:36:31 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/19 18:13:31 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	c = c +32;
	return (c);
}

/*int	main(void)
{
	int	c;
	int	result1;
	int	result2;

	c = 'A';
	result1 = tolower(c);
	result2 = ft_tolower(c);
	c = tolower(c);
	printf("Función original : %c\n", result1);
	c = ft_tolower(c);
	printf("Función propia : %c", result2);
	return (0);
}*/
