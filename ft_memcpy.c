/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:05:43 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/25 12:04:48 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	origen[50] = "Vamos a copiar memoria";
	char	destino[50];
	char	destino1[50];

	memcpy(destino, origen, 20);
	printf("Funcion original: %s\n", destino);
	ft_memcpy(destino1, origen, 20);
	printf("Funcion propia: %s\n", destino1);
	return (0);
}*/
