/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makcanca <mustafa.akcanca@takyonai.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:51:25 by makcanca          #+#    #+#             */
/*   Updated: 2022/02/05 22:08:10 by makcanca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			s_len;
	char			*copy;

	s_len = ft_strlen(s);
	if (start > s_len || len <= 0)
		return (ft_strdup(""));
	if ((start + len) > s_len)
	{
		copy = (char *) ft_calloc(s_len - start + 1, sizeof(char));
		if (!copy)
			return (ft_strdup(""));
		ft_strlcpy(copy, s + start, s_len - start + 1);
		return (copy);
	}
	copy = (char *) ft_calloc(len + 1, sizeof(char));
	if (!copy)
		return (ft_strdup(""));
	ft_strlcpy(copy, s + start, len + 1);
	return (copy);
}
char	*ft_subsitr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	s_len;

	s_len = ft_strlen(s);
	dest = malloc(len + 1);
	if(start > s_len || len <= 0)
		return (ft_strdup(""));
	ft_memcpy(dest, &s[start], len);
	dest[len] = 0;
	return dest;
}
