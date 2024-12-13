/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:19:04 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/13 14:32:15 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main(void)
{
	// Test 1: Wypisanie znaku na standardowe wyjście (stdout)
	ft_putchar_fd('A', 1);
	write(1, "\n", 1); // Nowa linia dla czytelności

	// Test 2: Wypisanie znaku na standardowy błąd (stderr)
	ft_putchar_fd('B', 2);
	write(2, "\n", 1); // Nowa linia dla czytelności

	// Test 3: Zapisanie znaku do pliku
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
		// Otwórz plik do zapisu
	if (fd == -1)
	{
		write(2, "Failed to open file\n", 20);
		return (1);
	}
	ft_putchar_fd('C', fd); // Zapisz znak do pliku
	close(fd);             // Zamknij plik

	// Informacja dla użytkownika
	write(1, "Check 'output.txt' for the character 'C'.\n", 42);

	return (0);
}*/
