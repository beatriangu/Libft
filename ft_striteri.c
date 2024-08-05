/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:29:07 by belamiqu          #+#    #+#             */
/*   Updated: 2023/11/02 15:30:20 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
	{	
		return ;
	}
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

void	ft_change(unsigned int i, char *str)
{
	*str = *str + i;
}

/*int main(void)
{
	char	string[] = "andar corriendo";

	printf("string sin modificar = %s\n", string);
	ft_striteri(string, ft_change);
	printf("string modificada = %s\n", string);
}*/
