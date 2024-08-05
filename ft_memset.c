/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:04:43 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/13 10:28:36 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*dest;

	dest = s;
	i = 0;
	while (i < n)
	{	
	dest[i] = c;
	i++;
	}
	return (s);
}

/*int	main(void)
{
	char	str[50] = "memorizando";
	char	str1[50] = "memorizando";

	printf("string original: %s\n", str);
	
	memset (str +5, '$', 4);
	printf("Funcion original: %s\n", str);
	ft_memset (str1 +5, '$', 4);
	printf("Funcion propia:	%s\n", str1);
	return (0);
}*/
