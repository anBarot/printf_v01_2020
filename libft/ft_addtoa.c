#include "libft.h"

char		*ft_addtoa(unsigned long n)
{
	char	*res;
	int		i;
	char	*hexchar;

	hexchar = "0123456789abcdef";
	if (!(res = (char*)calloc(sizeof(char), 17)))
		return (0);
	i = 0;
	if (n == 0)
		res[i++] = 48;
	while (n >= 1)
	{
		res[i] = hexchar[(n % 16)];
		n = n / 16;
		i++;
	}
	res[i] = '\0';
	res = ft_strjoin(res, "x0\0", 1);
	return (ft_reverse_string(res));
}