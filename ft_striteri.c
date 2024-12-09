/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:52:32 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/08 03:55:58 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_uppercase(unsigned int i, char *c)
{
	i = 0;
	if (c[i] >= 'a' && c[i] <= 'z')
	{	
		c[i] = c[i] - 32;
		i++;
	}
}

int	main(void)
{
	char s[] = "hello";
	ft_striteri(s, ft_uppercase);
	printf("result : %s", s);
	return (0);
}
*/
