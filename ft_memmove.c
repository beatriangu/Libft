/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:17:57 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/25 12:05:25 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst < (size_t)src)
	{
		while (i < len)
		{
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		i++;
		}
	}		
	else
	{
		i = len;
		while (i > 0)
		{
			((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
				i--;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	origen[26] = "Mueve el origen a destino";
	char	destino1[27];
	char	destino[27];
    	strcpy(origen, "Mueve el origen a destino");
		memmove(destino, origen, 27);
    	printf("Funcion original: %s\n", destino);
    	ft_memmove(destino1, origen, 27);
		printf("Funcion propia: %s\n", destino1);
	return (0);
}*/
