/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:08:23 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/25 10:19:30 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)

{
	int	sign;
	int	resu;

	sign = 1;
	resu = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		else
			str++;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		resu = resu * 10 + (*str - '0');
		str++;
	}
	return (resu * sign);
}

/*int	main(void)
{
	char input[] = "123kk45";
	int result = atoi(input);
	int result1 = ft_atoi(input);
	{	
	printf("Con la función original el número ya convertido es : %d\n", result);
	printf("Con la función propia el número ya convertido es : %d\n", result1);
	}
	return (0);
}*/
