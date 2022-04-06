/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserran <diserran@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:10:22 by diserran          #+#    #+#             */
/*   Updated: 2022/03/30 18:16:23 by diserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dstf;
	const char		*srcf;

	i = 0;
	if ((dst == src) || len == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dstf = (unsigned char *)dst;
	srcf = (const char *)src;
	while (i < len)
	{
		dstf[i] = srcf[i];
		i++;
	}
	dst = dstf;
	return (dst);
}
