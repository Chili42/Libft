/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpimente <rpimente@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 19:40:48 by rpimente          #+#    #+#             */
/*   Updated: 2020/01/24 19:42:38 by rpimente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*n_dst;
	const	char	*n_src;

	n_dst = dst;
	n_src = src;
	while (n)
	{
		if (*n_src == c)
		{
			*n_dst = *n_src;
			return (n_dst + 1);
		}
		*n_dst++ = *n_src++;
		n--;
	}
	return (NULL);
}
