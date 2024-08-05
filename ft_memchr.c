/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:32:30 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/25 10:19:44 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	cc;
	size_t			i;

	s = (unsigned char *)str;
	cc = c;
	i = 0;
	while (i < n)
		if (s[i++] == cc)
			return (s + i - 1);
	return (0);
}

/*int	main(void)
	{
	char	buffer[] = "Buscando memoria";
	char	search = 'm';
	size_t	buffersize = sizeof(buffer);
	
	void	*result1 = ft_memchr(buffer, search, buffersize);

	if (result1 != NULL)
	{
		printf("La Función original encontró el byte %c\n", search);
		printf("en la posición %zu \n", (size_t)result1 - (size_t)buffer);
	}
	else
	{
		printf("La Función original no encontró %c\n", search);
	}
	if (result1 != NULL)
	{
		printf("La  Función propia encontró el byte %c \n", search);
		printf("en la posición %zu \n", (size_t)result1 - (size_t)buffer);
	}
	else
	{
		printf("La Función propia no encontró %c\n", search);
	}
	return (0);
}*/
