/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:09:42 by belamiqu          #+#    #+#             */
/*   Updated: 2023/11/14 18:37:41 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_gnlstrcpy(char *dest, const char *src)
{

		while (*src !='\0')
		{
			*dst = *src;
			dest++;
			src++;
		}
		dst[i] = 0;
	}
	return (ft_gnlstrlen(src));
}

/*int	main(void)
{
	const char	src[] = "AMIGOOOOOO";
	char		 dst[20] = "HOLA";
	size_t 			dstsize = 3;
	size_t			retorno;

	retorno = ft_strlcpy(dst, src, dstsize);
	printf ("Funcion propia DST= %s\n", dst);
	printf ("Funcion propia RETURN = %zu\n", retorno);
	return(0);
}*/
