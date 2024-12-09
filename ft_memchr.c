/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 12:02:49 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/05 15:47:57 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mb, int sc, size_t n)
{
	size_t			i;
	unsigned char	*memory;
	unsigned char	c;

	i = 0;
	memory = (unsigned char *) mb;
	c = (unsigned char )sc;
	while (i < n)
	{
		if (memory[i] == c)
			return ((void *)&memory[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	const char *mb = "hello";
	int sc = 'l';

	printf("%p",ft_memchr(mb, sc, 5));
}
*/
