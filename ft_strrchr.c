/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:48:08 by diserran          #+#    #+#             */
/*   Updated: 2022/03/30 19:35:37 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		match;
	char	*str;

	i = 0;
	match = -1;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
			match = i;
		i++;
	}
	if (match >= 0)
	{
		i = 0;
		while (str)
		{
			if (*str == c && i == match)
				return (str);
			str++;
			i++;
		}
	}
	return (0);
}

/* char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (s[i])
	{
		if (s[i] == c)
			ptr = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		ptr = (char *)(s + i);
	return (ptr);
} */
