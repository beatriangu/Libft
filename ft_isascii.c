/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:52:58 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/12 10:29:22 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}	

/*int	main(void)
{
	int	c;
	int	result1;
	int	result2;

	c = 120;
	result1 = isascii(c);
	result2 = ft_isascii(c);
	if (result1 == 0)
	{
		printf("no se encuentra en ascii\n");
	}
	else
	{
		printf("si se encuentra en ascii\n");
	}
	if (result2 == 0)
	{
		printf("no se encuentra en ascii\n");
	}
	else
	{
		printf("si se encuentra en ascii\n");
	}
	return (0);
}*/
