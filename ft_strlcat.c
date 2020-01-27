/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpimente <rpimente@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 17:29:38 by rpimente          #+#    #+#             */
/*   Updated: 2020/01/27 21:00:33 by rpimente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t lens;
	size_t i;

	i = 0;
	lens = ft_strlen(src);
	if (!size)
		return (lens);
	while (*dest && size)
	{
		dest++;
		i++;
		size--;
	}
	while (*src && size > 1)
	{
		*dest++ = *src++;
		size--;
	}
	if (size != 0)
	{
		*dest = '\0';
	}
	return (lens + i);
}
