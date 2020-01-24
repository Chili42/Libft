/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpimente <rpimente@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:22:00 by rpimente          #+#    #+#             */
/*   Updated: 2020/01/24 18:31:53 by rpimente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char		*i;

	i = s;
	while (n)
	{
		*i = 0;
		i++;
		n--;
	}
}
/* função bzero é a mesma coisa que memset, apaga os dados da memoria *s começando no local
apontado por n */
//esta função esta obsoleta, usar memset
