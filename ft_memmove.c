/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpimente <rpimente@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 19:41:16 by rpimente          #+#    #+#             */
/*   Updated: 2020/01/24 19:42:38 by rpimente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*n_dst;
	const	char	*n_src;

	i = 0;
	n_dst = dst;
	n_src = src;
	if (n_dst > n_src)
	{
		i = n;
		while (i > 0)
		{
			n_dst[i - 1] = n_src[i - 1];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			n_dst[i] = n_src[i];
			i++;
		}
	}
	return (dst);
}
