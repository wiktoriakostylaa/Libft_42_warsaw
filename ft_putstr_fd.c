/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:33:28 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/13 14:49:44 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*int main(void)
{
	// Test 1: Wypisanie ciągu znaków na standardowe wyjście (stdout)
	ft_putstr_fd("Hello, stdout!\n", 1);

	// Test 2: Wypisanie ciągu znaków na standardowy błąd (stderr)
	ft_putstr_fd("Hello, stderr!\n", 2);

	// Test 3: Zapisanie ciągu znaków do pliku
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
		// Otwórz plik do zapisu
	if (fd == -1)
	{
		write(2, "Failed to open file\n", 20);
		return (1);
	}
	ft_putstr_fd("Hello, file!\n", fd); // Zapisz ciąg znaków do pliku
	close(fd); // Zamknij plik

	// Informacja dla użytkownika
	write(1, "Check 'output.txt' for the string 'Hello, file!'.\n", 49);

	return (0);
}*/