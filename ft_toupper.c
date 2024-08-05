/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:38:52 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/19 16:00:13 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	c = c -32;
	return (c);
}

/*int	main(void)
{
	int	c;
	int	result1;
	int	result2;

	c = 't';
	result1 = toupper(c);
	result2 = ft_toupper(c);
	c = toupper(c);
	printf("Función original : %c\n", result1);
	c = ft_toupper(c);
	printf("Función propia : %c", result2);
	return (0);
}*/
