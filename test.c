#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char s1[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	char c[] = "o";

	printf("Resultado: %d\n", ft_countwords(s1, c));
	return (0);
}
