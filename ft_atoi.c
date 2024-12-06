/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:05:11 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/06 17:19:25 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '+')
			sign = 1;
		else
			sign = -1;
	}
	i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/*int main() {
	const char* testStr = "  -12345";
	printf("Wynik konwersji: %d\n", ft_atoi(testStr));
	return (0);
}*/