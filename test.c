#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char * empty = (char*)"";

	printf("Resultado: %s\n", strnstr(empty, "coucou", -1));
	return (0);
}
