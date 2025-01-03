/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:05:11 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/02 13:50:07 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Funkcja ft_atoi konwertuje początkową część łańcucha znaków 
wskazanego przez nptr na liczbę całkowitą (int).
Pomija początkowe białe znaki, 
obsługuje opcjonalny znak '+' lub '-' oraz przetwarza cyfry 
aż do napotkania niecyfry.
*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int					i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		result *= 10;
		result += nptr[i] - '0';
		i++;
	}
	return (result * sign);
}

/*int main() {
	const char* testStr = "  -12345";
	printf("Wynik konwersji: %d\n", ft_atoi(testStr));
	return (0);
}*/