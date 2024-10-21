/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochaiba <mohamedaminechaibate@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:38:57 by mochaiba          #+#    #+#             */
/*   Updated: 2024/10/11 08:13:30 by mochaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	src_len;
	size_t	dst_len;
	size_t	space;

	index = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
	{
		return (size + src_len);
	}
	space = size - dst_len - 1;
	while (index < space && src[index])
	{
		dst[dst_len + index] = src[index];
		index++;
	}
	dst[dst_len + index] = '\0';
	return (dst_len + src_len);
}

// int main ()
// {
// 	char dst[12] = "amine";
// 	printf("%lu and %s\n", ft_strlcat(dst, "amine", 12), dst);
// }