#include "libft.h"

char	*ft_toupper_string(char *str)
{
	int i_str;

	i_str = 0;
	if (!str)
		return (0);
	while (str[i_str])
	{	
		str[i_str] = ft_toupper(str[i_str]);
		i_str++;
	}
	return (str);
}