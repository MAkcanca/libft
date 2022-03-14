/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makcanca <mustafa.akcanca@takyonai.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:43:36 by makcanca          #+#    #+#             */
/*   Updated: 2022/03/14 14:43:37 by makcanca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t		size_s;
	char		*newstring;

	if (!s1 || !set)
		return (NULL);
    size_s = ft_strlen(s1);
    // Find the first non-trim character
	while (*s1 && ft_strchr(set, *s1))
		s1++;
    
    // Find the last non-trim character
	while (size_s && ft_strchr(set, s1[size_s]))
		size_s--;

	newstring = ft_substr((char*)s1, 0, size_s + 1);
	return (newstring);
}
