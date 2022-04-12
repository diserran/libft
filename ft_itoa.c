/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:02:40 by diserran          #+#    #+#             */
/*   Updated: 2022/04/12 16:54:22 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getnumsize(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*convertnumber(int n, int numlen, char *str)
{
	int	mod;

	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[numlen] = '\0';
	while (n > 0)
	{
		mod = n % 10;
		str[--numlen] = mod + '0';
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		numlen;
	char	*str;

	numlen = getnumsize(n);
	str = (char *)malloc(sizeof(char) * (numlen + 1));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[numlen] = '\0';
		return (str);
	}
	if (n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	else
		return (convertnumber(n, numlen, str));
	return (NULL);
}
