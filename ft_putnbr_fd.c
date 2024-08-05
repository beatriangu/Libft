/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:57:45 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/07 17:34:49 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/*int	main(void)
{
	int	num1;
	int	num2;

	num1 = 2147483647;
	num2 = -67890;
	printf("Escribiendo números en stdout:\n");
	ft_putnbr_fd(num1, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(num2, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
