#include "libft.h"

char	*ft_char_to_string(int c)
{
	char	*res;

	if (!(res = ft_calloc(2, sizeof(char))))
		return (0);
	res[0] = c;
	return (res);
}
