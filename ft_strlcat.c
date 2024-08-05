/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:35:43 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/20 10:09:45 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	r;

	r = ft_strlen(dst) + ft_strlen(src);
	if ((ft_strlen(dst) + 1 > dstsize))
		return (ft_strlen(src) + dstsize);
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = 0;
	while (src[j] && i + j < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (r);
}

/*int	main(void)
{
	const char	src[20] = "AMIGO";
	char		 dst[20] = "HOLA";
	char		dst1[20] = "HOLA";
	size_t 			dstsize = sizeof(dst);
	size_t			retorno;
	size_t			retorno1;

	retorno = strlcat(dst, src, dstsize);
	printf("Funcion original DST= %s\n", dst);
	printf("Funcion original RETURN = %zu\n\n\n", retorno);
	retorno1 = ft_strlcat(dst1, src, dstsize);
	printf ("Funcion propia DST= %s\n", dst1);
	printf ("Funcion propia RETURN = %zu\n\n\n", retorno1);
	return(0);
}*/
