/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makcanca <mustafa.akcanca@takyonai.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:45:19 by makcanca          #+#    #+#             */
/*   Updated: 2022/03/14 14:45:20 by makcanca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *p1;
    unsigned char *p2;

    i = 0;
    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    while(i < n && p1 && p2 && p1[i] == p2[i])
        i++;
    if (i == n)
        return (0);
    return ((unsigned char)p1[i] - (unsigned char)p2[i]);
}
