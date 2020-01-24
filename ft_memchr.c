/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpimente <rpimente@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 19:41:00 by rpimente          #+#    #+#             */
/*   Updated: 2020/01/24 19:42:38 by rpimente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				index;
	const	char	*new_s;

	new_s = s;
	index = -1;
	while (n--)
	{
		index++;
		if (*new_s++ == c)
			return ((void *)s + index);
	}
	return (NULL);
}
