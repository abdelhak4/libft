/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:45:17 by ael-mous          #+#    #+#             */
/*   Updated: 2021/11/06 20:57:03 by ael-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			while (needle[j] == haystack[i + j] && (i + j) < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
int main()
{
	char s1[9];
	char s2[] = "MZIRIBMZE";
	size_t max = strlen(s2);
	printf("%s\n", ft_strnstr(s1, s2, 14));
	printf("%s", strnstr(s1, s2, 14));
}*/
