/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:04:17 by tpuma             #+#    #+#             */
/*   Updated: 2022/09/25 17:41:26 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
	s++;
	}
	return ((char *)s);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return ((char *)dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	long_dst;
	size_t	long_src;
	size_t	i;

	long_dst = ft_strlen(dst);
	long_src = ft_strlen(src);
	i = 0;
	if (dstsize < long_dst)
		return (dstsize + long_src);
	if (dstsize > long_dst)
	{
		while ((src[i] != '\0') && (i < (dstsize - long_dst - 1)))
		{
			dst[long_dst + i] = src[i];
			i++;
		}
	}
	dst[long_dst + i] = '\0';
	return (long_src + long_dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	ft_memmove(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (str);
}

/* char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&str[i]);
	return (0);
} */
