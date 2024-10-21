/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochaiba <mohamedaminechaibate@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 08:39:44 by mochaiba          #+#    #+#             */
/*   Updated: 2024/10/11 08:39:45 by mochaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*src_str;
	unsigned char	*dst_str;
	size_t			index;

	src_str = (unsigned char *)src;
	dst_str = dest;
	index = 0;
	while (index < n)
	{
		dst_str[index] = src_str[index];
		index++;
	}
	return (dest);
}
