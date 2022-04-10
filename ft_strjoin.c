/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:40:53 by diserran          #+#    #+#             */
/*   Updated: 2022/04/10 19:22:39 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	//char	*str;
	char	*strjoin;
	size_t	strlen;

	/* if (!s1 && !s2)
	{
		str = (char *)malloc(1);
		*str = '\0';
		return (str);
	} */
	strlen = ft_strlen(s1) + ft_strlen(s2);
	/* printf("Tamaño s1: %zu\t", ft_strlen(s1));
	printf("Tamaño s2: %zu\t", ft_strlen(s2));
	printf("Tamaño total: %zu\n", strlen); */
	strjoin = (char *)s1;
	ft_strlcat(strjoin, (char *)s2, (strlen + 1));
	printf("Antes de malloc: %s\n", strjoin);
	//str = malloc(sizeof(*s1) * (strlen + 1));
	//ft_strlcpy(str, strjoin, (strlen + 1));
	return (strjoin);
}
