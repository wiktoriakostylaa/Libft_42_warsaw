/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:33:14 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/13 13:33:23 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i = 1;
		n *= (-1);
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		len;

	len = ft_num_len(n);
	itoa = (char *)malloc(sizeof(char) * (len + 1));
	if (!itoa)
		return (NULL);
	itoa[len] = '\0';
	if (n == 0)
	{
		itoa[0] = '0';
		return (itoa);
	}
	if (n < 0)
	{
		itoa[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		len--;
		itoa[len] = (n % 10) + '0';
		n /= 10;
	}
	return (itoa);
}

/*int main()
{
	int n = 0;
	char *itoa = ft_itoa(n);

	if (itoa)
	{
		printf("String representation: %s\n", itoa);
		free(itoa);
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	return (0);
}*/