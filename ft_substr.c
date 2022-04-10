/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:33:35 by diserran          #+#    #+#             */
/*   Updated: 2022/04/10 13:55:47 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *) malloc(len);
	i = 0;
	if (start != 0)
		start--;
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
