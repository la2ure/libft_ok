/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:59:38 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/04 13:54:34 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	j = dest_len;
	if (dest_len >= dest_size)
		return (dest_size + src_len);
	while (src[i] && j < dest_size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
int	main()
{
	char dest[20] = "Hello";
	const char *src = " world";
	size_t result;

	result = ft_strlcat(dest, src, 20);
	printf("%s\n", dest);
	printf("%ld", result);
	return (0);
}
*/
