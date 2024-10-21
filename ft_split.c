/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochaiba <mohamedaminechaibate@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:43:42 by mochaiba          #+#    #+#             */
/*   Updated: 2024/10/01 16:47:57 by mochaiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static char	*ft_addstr(char *str, char c)
{
	int		i;
	int		size;
	char	*new;

	size = 0;
	while (str[size] != c && str[size])
		size++;
	new = malloc(size + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = str[i];
		i++;
	}
	new[size] = '\0';
	return (new);
}

static void	populate(char **matrix, char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			matrix[i++] = ft_addstr(str, c);
		while (*str != c && *str)
			str++;
	}
	matrix[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**matrix;

	size = count_words((char *)s, c);
	matrix = malloc((size + 1) * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	populate(matrix, (char *)s, c);
	return (matrix);
}
