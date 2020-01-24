/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpimente <rpimente@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 19:41:08 by rpimente          #+#    #+#             */
/*   Updated: 2020/01/24 19:42:38 by rpimente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const	unsigned	char	*n_s1;
	const	unsigned	char	*n_s2;

	n_s1 = s1;
	n_s2 = s2;
	if (n == 0)
		return (0);
	while (--n && *n_s1 == *n_s2)
	{
		n_s1++;
		n_s2++;
	}
	return (*n_s1 - *n_s2);
}
