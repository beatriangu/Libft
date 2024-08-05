/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:09:41 by belamiqu          #+#    #+#             */
/*   Updated: 2023/10/22 15:10:52 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char	str[50] = "rellenando de ceros";
	char	str1[50] = "rellenando de ceros";

	write(1,&str,20);
	write(1,"\n",1);
	bzero (str+5, 4);
	write(1,&str,20);
	write(1,"\n",1);
	ft_bzero (str1+5, 4);
	write(1,&str1,20);
	write(1,"\n",1);
	return (0);
}*/
