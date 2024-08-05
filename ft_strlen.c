/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:29:51 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/14 11:08:33 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

/*int	main(void)

{
	const char	*s1 = "coco";
	const char *s2 = "coco";
	printf("Funcion original : %lu\n", strlen(s1));
	printf("Funcion propia: %zu\n", ft_strlen(s2));
}*/
