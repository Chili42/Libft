/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpimente <rpimente@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 19:02:16 by rpimente          #+#    #+#             */
/*   Updated: 2020/01/27 19:03:06 by rpimente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_s;

	i = 0;
	if (!(sub_s = (char *)ft_calloc((len + 1), sizeof(char))))
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (sub_s);
	sub_s[len] = '\0';
	while (i < len)
	{
		sub_s[i] = ((char *)s)[start];
		i++;
		start++;
	}
	return (sub_s);
}
