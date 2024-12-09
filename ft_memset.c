/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:24:17 by lmestre           #+#    #+#             */
/*   Updated: 2024/11/13 17:39:29 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *str, int value, size_t count)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char *)str;
	while (i < count)
	{
		temp[i] = (unsigned char) value;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "ABCDEF";
	int	value = '?';

	ft_memset(str, value, 2);
	printf("%s\n", str);
}
*/
