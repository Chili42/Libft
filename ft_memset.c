/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpimente <rpimente@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:41:40 by rpimente          #+#    #+#             */
/*   Updated: 2020/01/27 19:04:33 by rpimente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t bytes)
{
	char	*start;

	if (b == NULL)
		return (NULL);
	start = b;
	while (bytes)
	{
		*start = c;
		start++;
		bytes--;
	}
	return (b);
}
