/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:03:01 by belamiqu          #+#    #+#             */
/*   Updated: 2023/11/13 11:08:40 by belamiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	void	*memory;

	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, count * size);
	return (memory);
}

int	main(void)
{
	size_t	num_elements;
	size_t	element_size;
	size_t	element_size1;
	int		*arr;
	int		*arr1;

	num_elements = 5;
	element_size = sizeof(int);
	element_size1 = sizeof(int);
	arr = (int *)calloc(num_elements, element_size);
	arr1 = (int *)ft_calloc(num_elements, element_size1);
	if (arr == NULL)
	{
		perror("calloc");
		perror("ft_calloc");
		return (1);
	}
	{
		printf("Valores del arreglo con la Funcion original:\n");
	}
	for	(size_t i = 0; i < num_elements; i++)
			printf("%d\n", arr[i]);
		free(arr);
		{
		printf("Valores del arreglo con la Funcion propia:\n");
		}
	for	(size_t i = 0; i < num_elements; i++)
		{
		printf("%d\n", arr1[i]);
		}	
		free(arr1);
	return (0);
}
