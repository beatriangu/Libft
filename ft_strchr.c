/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:55:57 by belamiqu          #+#    #+#             */
/*   Updated: 2023/11/05 12:16:18 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] == (unsigned char)c)
			return ((char *) s + i);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *) s + i);
	return (NULL);
}

/*int main(void)
{
	const	char *str = "Hello, World!";
	char	target = '\0';
	char	*result;
	char	*result1;

	result = strchr(str, target);
	result1 = ft_strchr(str, target);

	if (result != NULL)
	{
		printf("El caracter '%c' fue encontrado en la cadena.\n", target);
		printf("Posición en la cadena; %ld\n", result - str);
	}
	else
	{
		printf("El carácter '%c' no fué encontrado en la cadena",target);
	return (0);
	}
	
	if  (result1 != NULL)
	{
		printf("El caracter'%c' fue encontrado en la cadena.\n", target);	
		printf("Posición en la cadena; %ld\n", result1 - str);
	}
	else
	{
		printf("El carácter '%c' no fué encontrado en la cadena", target);
	}
		return (0);
}*/
