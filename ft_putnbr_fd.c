/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:55:15 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/14 18:35:03 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}

/*int main(void)
{
	// Test 1: Wypisanie liczby dodatniej na standardowe wyjście (stdout)
	ft_putnbr_fd(12345, 1);
	write(1, "\n", 1); // Dodanie nowej linii dla czytelności

	// Test 2: Wypisanie liczby ujemnej na standardowe wyjście (stdout)
	ft_putnbr_fd(-67890, 1);
	write(1, "\n", 1);

	// Test 3: Wypisanie liczby 0 na standardowe wyjście (stdout)
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);

	// Test 5: Zapisanie liczby do pliku
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
		// Otwórz plik do zapisu
	if (fd == -1)
	{
		write(2, "Failed to open file\n", 20);
		return (1);
	}
	ft_putnbr_fd(987654, fd); // Zapisz liczbę do pliku
	close(fd); // Zamknij plik

	// Informacja dla użytkownika
	write(1, "Check 'output.txt' for the number '987654'.\n", 44);

	return (0);
}*/