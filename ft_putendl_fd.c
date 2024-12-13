/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:45:00 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/13 14:52:29 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*int main(void)
{
	// Test 1: Wypisanie ciągu znaków na standardowe wyjście (stdout)
	ft_putendl_fd("Hello, stdout!", 1);

	// Test 2: Wypisanie ciągu znaków na standardowy błąd (stderr)
	ft_putendl_fd("Hello, stderr!", 2);

	// Test 3: Zapisanie ciągu znaków do pliku
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
		// Otwórz plik do zapisu
	if (fd == -1)
	{
		write(2, "Failed to open file\n", 20);
		return (1);
	}
	ft_putendl_fd("Hello, file!", fd); // Zapisz ciąg znaków do pliku
	close(fd); // Zamknij plik

	// Informacja dla użytkownika
	write(1, "Check 'output.txt' for the string 'Hello, file!\\n'.\n", 52);

	return (0);
}*/