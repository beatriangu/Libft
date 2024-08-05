/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:47:40 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/20 12:57:37 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!len || start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (0);
	ft_strlcpy(sub, s + start, (len + 1));
	return (sub);
}

/*int	main(void)
{
	const char		*str = "La triangu estaba preciosa";
	unsigned int	start = 10; 
	size_t			len = 26;
	char	*substring = ft_substr(str, start, len);
	
	if (substring == NULL)
	{
		perror("ft_substr");
		return (1);
	}
	printf("Subcadena: %s\n", substring);
	free(substring);
	return (0);
}*/
