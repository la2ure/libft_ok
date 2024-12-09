/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:48:13 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/04 19:10:31 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i])
		i++;
	j = 0;
	while (src[j] && j + 1 < n)
	{
		dest[j] = src[j];
		j++;
	}
	if (n > 0)
		dest[j] = '\0';
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	char dest[12];
	const char *src = "hello you";
	size_t n = sizeof(dest) / sizeof(dest[0]);
	int result;

	result = ft_strlcpy(dest, src, n);
	printf("%d",result);
}
*/
