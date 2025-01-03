/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:33:14 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/02 14:22:49 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Funkcja ft_itoa konwertuje liczbę całkowitą n na reprezentację w postaci 
łańcucha znaków (string).

Funkcje pomocnicze:
- ft_char: Przekształca liczby na znaki i zapisuje je w łańcuchu.
- ft_len: Oblicza długość łańcucha wymaganego do zapisania liczby, 
uwzględniając znak.
*/

#include "libft.h"

static char	*ft_char(char *atoi, unsigned int num, long int len)
{
	while (num > 0)
	{
		atoi[len--] = (num % 10) + '0';
		num = num / 10;
	}
	return (atoi);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*atoi;
	long int		len;
	unsigned int	num;
	int				sign;

	sign = 1;
	len = ft_len(n);
	atoi = (char *)malloc(sizeof(char) * (len + 1));
	if (!(atoi))
		return (NULL);
	atoi[len--] = '\0';
	if (n == 0)
		atoi[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		num = n * -1;
		atoi[0] = '-';
	}
	else
		num = n;
	atoi = ft_char(atoi, num, len);
	return (atoi);
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