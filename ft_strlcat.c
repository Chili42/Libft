/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpimente <rpimente@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 17:29:38 by rpimente          #+#    #+#             */
/*   Updated: 2020/01/24 19:43:39 by rpimente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destino, const char *fonte, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (destino[i])
		i++;
	while (fonte[j] && i + j < size)
	{
		destino[i + j] = fonte[i];
		i++;
	}
	return (i + j);
}
// strlcat concatena a segunda string (fonte) no final da primeira (destino)