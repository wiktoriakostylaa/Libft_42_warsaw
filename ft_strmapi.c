/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:36:12 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/13 14:00:02 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*strmapi;

	len = ft_strlen(s);
	strmapi = (char *)malloc(sizeof(char) * len + 1);
	if (!strmapi)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		strmapi[i] = (*f)(i, s[i]);
		i++;
	}
	strmapi[i] = '\0';
	return (strmapi);
}

/*static char example_function(unsigned int index, char c)
{
	unsigned int	i;
	unsigned int	len;
	char			*strmapi;

	if (index % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32); // Zmiana na wielką literę
	return (c);          // Bez zmian
}*/

/*int main(void)
{
	char *input = "abcdef";
	char *result;

	// Wywołanie ft_strmapi z example_function
	result = ft_strmapi(input, example_function);

	if (result != NULL)
	{
		printf("Original string: %s\n", input);
		printf("Modified string: %s\n", result);
		free(result); // Zwolnienie pamięci przydzielonej przez malloc
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}*/
