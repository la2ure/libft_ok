/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 13:33:58 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/03 17:29:37 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nb)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nb[i] >= 9 && nb[i] <= 13) || (nb[i] == 32))
		i++;
	if (nb[i] == '-' || nb[i] == '+')
	{
		if (nb[i] == '-')
			sign *= -1;
		i++;
	}
	while (nb[i] && nb[i] >= '0' && nb[i] <= '9')
	{
		result = (result * 10) + (nb[i] - '0');
		i++;
	}
	return (result * sign);
}

/*int	main()
{
	const char *nb = "142";

	printf("%d", ft_atoi(nb));
}*/
