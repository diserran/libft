/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:11:42 by diserran          #+#    #+#             */
/*   Updated: 2022/04/01 15:16:41 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	const char		*str1;
	const char		*str2;

	i = 0;
	str1 = (const char *)s1;
	str2 = (const char *)s2;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && (i < n - 1) && str1[i] != '\0')
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
