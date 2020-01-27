/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpimente <rpimente@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 19:08:56 by rpimente          #+#    #+#             */
/*   Updated: 2020/01/27 19:11:02 by rpimente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_chrcmp(const char c, const char *s)
{
	int	size;

	size = ft_strlen(s);
	while (--size >= 0)
		if (c == s[size])
			return (1);
	return (0);
}

static	int	ft_strrevtrim(char const *s1, char const *set)
{
	int	size;

	size = ft_strlen(s1) - 1;
	while (size >= 0 && ft_chrcmp(s1[size], set))
		size--;
	return (size);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	size;

	start = 0;
	while (s1[start] && ft_chrcmp(s1[start], set))
		start++;
	size = ft_strrevtrim((s1 + start), set);
	return (ft_substr(s1, start, (size + 1)));
}
