/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpimente <rpimente@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 19:11:26 by rpimente          #+#    #+#             */
/*   Updated: 2020/01/27 19:09:14 by rpimente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nbr_el(char const *s, char c)
{
	int	i;
	int	nbr_el;

	(void)c;
	i = 0;
	nbr_el = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nbr_el++;
		i++;
	}
	return (nbr_el);
}

static	int	ft_len_until(char const *s, char c)
{
	int len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char		**ft_split2(char const *s, char c, int j, int i)
{
	int		n;
	char	**ptr;

	n = 0;
	if (!(ptr = (char **)ft_calloc((ft_nbr_el(s, c) + 1), sizeof(char *))))
		return (NULL);
	while (s[n])
	{
		while (s[n] == c && s[n])
			n++;
		i = 0;
		ptr[j] = (char *)ft_calloc((ft_len_until(s + n, c) + 1), sizeof(char));
		while (s[n] && s[n] != c && s[n])
		{
			ptr[j][i++] = s[n++];
			if (s[n] == c || s[n] == '\0')
				ptr[j][i] = '\0';
		}
		while (s[n] && s[n] == c)
			n++;
		j++;
	}
	return (ptr);
}

char		**ft_split(char const *s, char c)
{
	char	**ptr;

	if (ft_nbr_el(s, c) == 0)
	{
		if (!(ptr = (char **)ft_calloc(1, sizeof(char *))))
			return (NULL);
		return (ptr);
	}
	if (!(ptr = ft_split2(s, c, 0, 0)))
		return (NULL);
	return (ptr);
}
