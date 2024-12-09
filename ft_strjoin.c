/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:01:49 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/02 15:57:22 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;
	char	*final;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	final = malloc((len1 + len2 + 1) * sizeof(char));
	if (!final)
		return (NULL);
	while (s1[i])
	{
		final[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		final[i + j] = s2[j];
		j++;
	}
	final[i + j] = '\0';
	return (final);
}
/*
int	main()
{
	char const *s1 = "hello";
	char const *s2 = "world";

	//char *result = ft_strjoin(s1, s2);
	printf("resultat: %s", ft_strjoin(s1, s2));
}
*/
