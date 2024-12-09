/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:58:26 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/08 06:43:32 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	size_t			i;

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (len-- > 0)
			temp_dest[len] = temp_src[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main()
{
	char dest[100] = "";
	char src[]= "123456789";
	char *result;

	result = ft_memmove(dest, src, 9);
	printf("avant %s\n", result);
	result = ft_memmove(dest + 2, src, 9);

	printf("dest : %s\n", result);
	return 0;
} 
*/
