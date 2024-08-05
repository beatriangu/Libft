/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:51:27 by belamiqu          #+#    #+#             */
/*   Updated: 2023/11/02 16:05:04 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		len;

	len = ft_strlen(s1) + 1;
	s2 = malloc(len);
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, len);
	return (s2);
}

/*int	main(void)
{
	const char	*str = "Hola mundo";
	const char	*str1 = "Hola mundo";
	char		*duplicated_str;
	char		*duplicated_str1;

	duplicated_str = strdup(str);
	duplicated_str1 = ft_strdup(str);
	if (duplicated_str != NULL)
	{
		printf("Cadena original: %s\n", str);
		printf("Cadena original: %s\n", str1);
		printf("Cadena duplicada con función original: %s\n", duplicated_str);
		printf("Cadena duplicada con función propia: %s\n", duplicated_str1);
		free(duplicated_str);
		free(duplicated_str1);
	}	
	else
	{
		printf("Error: no se pudo duplicar cadena.\n");
	}
	return (0);
}*/
