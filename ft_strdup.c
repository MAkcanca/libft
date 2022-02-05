/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makcanca <mustafa.akcanca@takyonai.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:45:17 by makcanca          #+#    #+#             */
/*   Updated: 2022/02/05 21:47:36 by makcanca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	void	*new;

	len = ft_strlen(s) + 1;
	new = malloc(len);
	if (new == NULL)
		return (NULL);

	return (char *)memcpy(new, s, len);
}
