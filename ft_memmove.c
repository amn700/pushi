/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochaiba <mohamedaminechaibate@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:02:42 by mochaiba          #+#    #+#             */
/*   Updated: 2024/10/11 11:44:05 by mochaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_str;
	char	*dst_str;

	src_str = (char *)src;
	dst_str = dest;
	if (dest == src || n == 0)
		return (dest);
	if (dst_str < src_str)
		return (ft_memcpy(dest, src, n));
	while (n-- > 0)
	{
		dst_str[n] = src_str[n];
	}
	return (dest);
}
