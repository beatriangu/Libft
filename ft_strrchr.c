/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:15:49 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/19 12:59:04 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = ft_strlen(s);
	str = (char *)s;
	while (i >= 0)
	{	
		if (s[i] == (unsigned char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char *str = "Hello, World!";
	char		target = '!';
	char		*result;
	char		*result1;

	result = strrchr(str,target);
	result1 = ft_strrchr(str,target);
	if (result != NULL)
	{
		printf("El caracter '%c' fue encontrado en la cadena.\n", target);
		printf("Posición en la cadena: %ld\n", result - str);
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