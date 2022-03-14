/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makcanca <mustafa.akcanca@takyonai.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:41:55 by makcanca          #+#    #+#             */
/*   Updated: 2022/03/14 14:41:56 by makcanca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strchr(const char *s, int c)
{
    char ch;

    ch = (char)c;
    while (*s)
    {
        if (*s == ch)
            return ((char *)s);
        s++;
    }
    if (*s == ch)
        return ((char *)s);
    return (NULL);
}
