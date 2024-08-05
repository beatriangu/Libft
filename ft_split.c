/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:31:31 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/25 10:42:23 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free2(void **ss)
{
	size_t	i;

	i = 0;
	while (ss[i])
	{
		free(ss[i]);
		i++;
	}
	free(ss);
}

static size_t	wlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	words(char const *s, char c)
{
	size_t	p;

	p = 0;
	while (*s)
	{
		if (s[0] != c && (s[1] == c || s[1] == 0))
			p++;
		s++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**ss;
	size_t	i;
	size_t	j;

	ss = malloc(sizeof(char *) * (words(s, c) + 1));
	if (!ss)
		return (NULL);
	i = 0;
	j = 0;
	while (i < words(s, c))
	{
		while (s[j] == c)
			j++;
		ss[i] = ft_substr(s, j, wlen(s + j, c));
		if (!ss[i])
			return (ft_free2((void **)ss), NULL);
		i++;
		j += wlen(s + j, c);
	}
	ss[i] = NULL;
	return (ss);
}

/*int main(void)
 {
 	char	*string = "Hola,,,,,,mundo,esto,es,una,prueba";
 	char	**words = ft_split(string, ',');

 	if (words)
 	{
 		int	i = 0;
 		while (words[i] != NULL)
 		{
 			printf("Palabra %d: %s\n", i, words[i]);
             i++;
 		}
         i = 0;
 		while (words[i] != NULL)
 		{
 		free(words[i]);
             i++;
 		}
 		free(words);
 	}
 	else
 	{
 		printf("No se pudieron dividir las palabras.\n");
 	}
 	return (0);
 }*/
