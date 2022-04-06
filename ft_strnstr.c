/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:32:43 by diserran          #+#    #+#             */
/*   Updated: 2022/04/01 18:48:40 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> //Borrar

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*str_haystack;
	char	*str_needle;

	i = 0;
	str_haystack = (char *)haystack;
	str_needle = (char *)needle;
	if (!*needle || haystack == needle)
		return (str_haystack);
	while (i < len)
	{
		if (*str_haystack == *str_needle)
		{
			printf("Haystack: %c\t", *str_haystack);
			printf("Needle: %c\n", *str_needle);
			while (*str_needle == *str_haystack)
			{
				printf("Haystack: %c\t", *str_haystack);
				printf("Needle: %c\n", *str_needle);
				str_needle++;
				str_haystack++;
			}
			printf("El final es 0? %d\n", *str_needle == '\0');
			if (!*str_needle)
				return (str_haystack);
		}
		i++;
		str_haystack++;
	}
	return (0);
}
