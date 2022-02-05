/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makcanca <mustafa.akcanca@takyonai.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:06:17 by makcanca          #+#    #+#             */
/*   Updated: 2022/02/05 20:08:56 by makcanca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*buffer;

	i = 0;
	buffer = str;
	while (i++ < n)
		buffer[i] = c;
	return (buffer);
}
