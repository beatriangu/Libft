/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:45:47 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/21 16:21:25 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, *(s1 + i)))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*int	main(void)
{
	char	*s1 = "HHla, munHo";
	char	*set = "H";

 	char *trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str != NULL)
	{
		printf("Cadena original: \"%s\n", s1);
		printf("Cadena trimmeada: \"%s\n", trimmed_str);
		free (trimmed_str);
 	}
 	else
 	{
 		printf("Error: No se pudo asignar memoria para la cadena trimada.\n");
		}
	return (0);
}*/
