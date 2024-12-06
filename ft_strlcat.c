/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:02:51 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/06 13:26:11 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dst_len >= size)
	{
		return (src_len + size);
	}
	while (size > 0 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
		size--;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
