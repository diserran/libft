#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	i = 0;
	char s1[] = "Hola Mundo!";

	while (s1[i++])
	{
		printf("String: %c\t", s1[i]);
		printf("Index: %d\n", i);
		//i++;
	}
	return (0);
}
