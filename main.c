
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char const	*s = "lorem ipsum dolor sit amet";
	char const	*set = "telo";

	printf("%s", ft_strtrim(s, set));
	return (0);
}
