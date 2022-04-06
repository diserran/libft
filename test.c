#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char txt[] = "test2";
	char txt2[] = "es";

	printf("Resultado: %s\n", strnstr(txt, txt2, 3));
	return (0);
}
