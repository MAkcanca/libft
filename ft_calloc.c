/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makcanca <mustafa.akcanca@takyonai.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:40:36 by makcanca          #+#    #+#             */
/*   Updated: 2022/03/14 16:45:40 by makcanca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;
	size_t	len;

	i = 0;
	len = count * size;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
