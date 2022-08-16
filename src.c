/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 02:19:47 by amahi             #+#    #+#             */
/*   Updated: 2022/07/16 02:34:36 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *strB, const char *strA, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)strA;
	b = (unsigned char *)strB;
	j = 0;
	if (!*strA)
		return ((char *)strB);
	while ((b[j] != '\0') && (j < len))
	{
		i = 0;
		while (a[i] == b[j + i] && ((j + i) < len))
		{
			i++;
			if (a[i] == '\0')
				return ((char *) &b[j]);
		}
		j++;
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*a;
	size_t		i;
	size_t		j;
	size_t		z;

	if (s1 == 0 || s2 == 0)
		return (0);
	a = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	z = 0;
	if (a == 0)
		return (0);
	while (z < (ft_strlen(s1) + ft_strlen(s2) + 1))
	{
		if (s1[i] == '\0')
			a[z++] = s2[j++];
		else
			a[z++] = s1[i++];
	}
	return (a);
}
