/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:21:26 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/05 16:24:45 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == 0)
		return (ft_strdup(""));
	size_t (i) = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	size_t (len) = j - i + 1;
	s2 = malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	if (!s2)
		return (NULL);
	size_t (k) = 0;
	while (i <= j)
		s2[k++] = s1[i++];
	s2[k] = '\0';
	return (s2);
}
