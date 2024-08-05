/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:38:47 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/26 18:09:05 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (0);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
		str[i] = '\0';
	return (str);
}

/*char	mi_funcion(unsigned int i, char str)
{
	i = 32;
	return (str + i);
}

int	main(void)
{
	char	*str;
	char	*resultado;

	str = "Marchando! :)";
	printf("el resultado es: %s\n", str);
	resultado = ft_strmapi(str, mi_funcion);
	printf("el resultado es: %s\n", resultado);
	free(resultado);
	return (0);
}*/
