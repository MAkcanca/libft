/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makcanca <mustafa.akcanca@takyonai.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:51:25 by makcanca          #+#    #+#             */
/*   Updated: 2022/03/14 16:21:38 by makcanca         ###   ########.fr       */
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
