/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:53:56 by ael-mous          #+#    #+#             */
/*   Updated: 2021/11/17 21:14:56 by ael-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	ft_strlen(s1);
	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (s2 == NULL)
		return (NULL);
	ft_memcpy(s2, s1, ft_strlen(s1));
	*(s2 + ft_strlen(s1)) = '\0';
	return (s2);
}
/*
int main()
{
	const char ss1[] = "Google\0.com\0";
	ft_strdup(ss1);
	printf("%s\n", ss1);
	printf("%s", strdup(ss1));
}*/
