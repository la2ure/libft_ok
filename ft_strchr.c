/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:12:02 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/05 13:22:10 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *str, int sc)
{
	unsigned char	c;

	c = (unsigned char) sc;
	while (*str)
	{
		if ((unsigned char) *str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}
/*
int	main()
{
	const char	*str;
	unsigned char	sc;

	str = "hello";
	sc = 'l';
	printf("result : %s", ft_strchr(str, sc));
}
*/
