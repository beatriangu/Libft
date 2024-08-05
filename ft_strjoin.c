/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:11:58 by belamiqu          #+#    #+#             */
/*   Updated: 2023/11/02 16:01:30 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*strs1s2;
	size_t	strs1s2_size;

	strs1s2_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	strs1s2 = (char *)malloc(strs1s2_size);
	if (!strs1s2)
		return (0);
	ft_strlcpy(strs1s2, s1, ft_strlen(s1) + 1);
	ft_strlcat(strs1s2, s2, strs1s2_size);
	return (strs1s2);
}*/

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	if (result)
	{
		ft_memcpy(result, s1, len1);
		ft_memcpy(result + len1, s2, len2);
		result[len1 + len2] = '\0';
	}
	return (result);
}

/*int	main(void)
{
	const char	*s1 = "Unimos";
	const char	*s2 = "cadenas";
	char		*result;

	result = ft_strjoin(s1, s2);
	printf("cadena concatenada: %s\n", result);
	free (result);
	return (0);
}*/
