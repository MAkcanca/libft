/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makcanca <mustafa.akcanca@takyonai.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:41:16 by makcanca          #+#    #+#             */
/*   Updated: 2022/03/14 14:41:17 by makcanca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    chr;

    i = 0;
    chr = c;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == chr)
            return ((void *)s + i); // void pointer
        i++;
    }
    return (NULL);
}
