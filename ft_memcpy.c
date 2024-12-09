/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:21:24 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/05 15:36:32 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	while (n > 0)
	{
		*temp_dest = *temp_src;
		temp_src++;
		temp_dest++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char *src = "abcd";
	char dest [10] = "";
	ft_memcpy(dest, src, 2);
	printf("result : %s", dest);

}
*/
