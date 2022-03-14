/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makcanca <mustafa.akcanca@takyonai.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:43:36 by makcanca          #+#    #+#             */
/*   Updated: 2022/03/14 16:55:35 by makcanca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	head;
	size_t	tail;
	char	*newstring;

	if (!s1 || !set)
		return (NULL);
	head = 0;
	tail = ft_strlen(s1);
	while (s1[head] && ft_strchr(set, s1[head]))
		head++;
	while (s1[tail - 1] && ft_strchr(set, s1[tail - 1]) && tail > head)
		tail--;
	newstring = (char *)malloc(sizeof(char) * (tail - head + 1));
	if (newstring)
		ft_strlcpy(newstring, &s1[head], tail - head + 1);
	return (newstring);
}
