/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochaiba <mohamedaminechaibate@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:42:19 by mochaiba          #+#    #+#             */
/*   Updated: 2024/10/01 17:49:53 by mochaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy(char *new, char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		j++;
		i++;
	}
	return (new);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*new;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(size + 1);
	if (new == NULL)
		return (NULL);
	new[size] = '\0';
	return (copy(new, (char *)s1, (char *)s2));
}
