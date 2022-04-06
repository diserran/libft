
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	//char dest[20];
	char src[] = "lorem ipsum dolor sit amet";
	char *dest;

	dest = src + 1;
	printf("Test 1: %s\n", ft_memmove(dest, "consectetur", 5));
	//printf("Test 2: %s\n", ft_memmove(dest, "con\0sec\0\0te\0tur", 10));
	//printf("Test 3: %s\n", ft_memmove(dest, src, 8));
	return (0);
}
