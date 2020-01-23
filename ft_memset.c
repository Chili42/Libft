/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpimente <rpimente@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:41:40 by rpimente          #+#    #+#             */
/*   Updated: 2020/01/23 17:21:38 by rpimente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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



/* memset () é usado para preencher um bloco de memória com um valor específico
usamos para limpar o "lixo" da memória
b é o endereço(ponteiro inicial nulto para receber qualquer paramentro) da memória a ser preenchida
c é o valor que será preenchido
bytes é o número de bytes a serem preenchidos a partir do "b" a ser preenchido  */
