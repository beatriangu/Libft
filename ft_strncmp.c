/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:27:12 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/20 11:05:26 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char)s1[i] || (unsigned char)s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const	char *str1 = "Hola, Mundo!";
	const	char *str2 = "Hola, Amigo!";
	size_t n = 5;
	int	result1 = strncmp(str1, str2, n);
	int	result2 = ft_strncmp(str1, str2, n);
	if ((result1 = result2 ))
	{
		printf("Función original; son diferentes . str1 es menor que str2.\n");
		printf("Función propia; son iguales hasta%zu caracteres.\n", n);}
	else if (result1 > result2){
		printf("Funcion original; son diferentes. str1 es mayor que str2.\n");
		printf("Funcion propia; son diferentes. str1 es mayor que str2.\n");} 
	else{
		printf("Función original; son iguales hasta %zu caracteres.\n", n);
		printf("Función propia; son iguales  %zu caracteres.\n", n);}
	return(0);
}*/
