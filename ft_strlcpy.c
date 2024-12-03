/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:08:16 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/03 17:20:45 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t strlcpy(char *dst, const char *src, size_t size)
{
    if (dst == NULL || src == NULL)
    {
        return (0);
    }
    size_t i;

    i = 0;
    while (src[i] && i < size - 1)
    {
        *dst = *src;
        i++;
    }
    
}