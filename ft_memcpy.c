/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:16:05 by ael-mous          #+#    #+#             */
/*   Updated: 2021/11/17 20:05:10 by ael-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destt;
	unsigned char	*srcc;

	destt = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	if (destt == 0 && srcc == 0)
		return (NULL);
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (dst);
}
/*
int main()
{
	printf("%s", ft_memcpy((void *)0, (void *)0, 5));
	printf("%s", memcpy((void *)0, (void *)0, 5));
}*/
