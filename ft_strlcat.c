/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:56:55 by ael-mous          #+#    #+#             */
/*   Updated: 2021/11/18 15:16:01 by ael-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_s;
	size_t	size;
	size_t	len_d;
	size_t	i;

	len_s = 0;
	len_d = 0;
	i = 0;
	while (dst[len_d])
		len_d++;
	while (src[len_s])
		len_s++;
	if (dstsize < len_d)
		return (len_s + dstsize);
	size = (dstsize - 1) - len_d;
	while (size-- && src[i])
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}
