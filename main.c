
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	s1[] = "Helloff";
	char	s2[] = "Worldjdkfjkdljfldjf";
	/* char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet"; */

	printf("Resultado: %s\n", ft_strjoin(s1, s2));
	return (0);
}
