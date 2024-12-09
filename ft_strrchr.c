/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:20:25 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/05 15:37:06 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int sc)
{
	int	i;

	i = ft_strlen(str);
	if (sc == '\0')
		return ((char *)str + i);
	while (i >= 0 && str[i] != (unsigned char) sc)
		i--;
	if (i >= 0 && str[i] == (unsigned char) sc)
		return ((char *)str + i);
	else
		return (0);
}
/*
int	main()
{
	const char *str = "cacbcd";
	int sc = 'c';
	printf("%s", ft_strrchr(str, sc));
}
*/
