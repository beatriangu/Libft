/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:07:21 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/20 11:07:47 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] && i < len)
	{
	j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	const char *haystack = "Ha subido mucho el mar";
	const char *needle = "mucho";

	const char *result;
	const char *result1;

	result = strnstr(haystack, needle, 20);
	result1 = ft_strnstr(haystack, needle, 20);

	if (result != NULL || result1 != NULL)
	{
		printf("Subcadena encontrada con la Funcion original: %s\n", result);
		printf("Subcadena encontrada con la Funcion original: %s\n", result1);
	}
	else
	{	
		printf("Subcadena no encontrada con la funcion original.\n");
		printf("Subcadena no encontrada con la funcion propia.\n");
	}
	return (0);
}*/
