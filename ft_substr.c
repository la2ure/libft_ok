/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:21:12 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/05 15:51:17 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	char	*s2;

	size_t (i) = 0;
	size_t (l) = ft_strlen(s1);
	if (start > l)
	{
		s2 = malloc(1);
		if (s2 == NULL)
			return (NULL);
		if (s2)
			s2[0] = '\0';
		return (s2);
	}
	if (start + len > l)
		len = l - start;
	s2 = malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	while (i < len)
	{
		s2[i] = s1[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main()
{
	char *s1 = "Hello";
	unsigned int start = 0;
	size_t len = 4;

	char *result = ft_substr(s1, start, len);
	printf("s2 = %s", result);
}
*/
