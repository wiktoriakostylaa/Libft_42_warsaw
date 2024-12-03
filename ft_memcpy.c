/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:16:21 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/03 17:05:58 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;
	size_t				i;

	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		*d++ = *s++;
		i++;
	}
	return (dest);
}

/*int main() {
	char src[20] = "Hello, World!";
	char dest[20];

	ft_memcpy(dest, src, 14);

	printf("Źródło: %s\n", src);
	printf("Kopia: %s\n", dest);
}*/