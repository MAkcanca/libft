/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makcanca <mustafa.akcanca@takyonai.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:42:27 by makcanca          #+#    #+#             */
/*   Updated: 2022/03/14 14:42:28 by makcanca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  dest_len;
    size_t  src_len;

    i = 0;
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (size <= dest_len)
        return (size + src_len);
    while (dest[i] && i < size - 1)
        i++;
    while (*src && i < size - 1)
    {
        dest[i] = *src;
        src++;
        i++;
    }
    dest[i] = '\0';
    return (dest_len + src_len);
}
