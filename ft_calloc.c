/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 14:14:58 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/01 15:14:27 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = malloc(n * size);
	if (temp == NULL)
		return (NULL);
	while (i < n * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
/*
int	main()
{
	size_t n = 4;
	size_t size = 5;

	printf("%p",ft_calloc(n, size));
}
*/
