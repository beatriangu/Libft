/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:59:50 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/12 12:53:18 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}	

/*int	main(void)
{
	int	c;

	c = 128;
	printf("Funcion original: %d\n", isprint(c));
	printf("Funcion propia: %d\n", ft_isprint(c));
}*/
