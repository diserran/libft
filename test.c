#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
	int		mod;
	int		numlen;
	char	*str;

	numlen = getnumsize(n);
	str = (char *)malloc(sizeof(char) * (numlen + 1));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	else
		return (convertnumber(n, numlen, str));
	return (NULL);
}

int	main(void)
{
	printf("Resultado: %s\n", ft_itoa(4434));
	return (0);
}
