#include "libft.h"

char	*ft_scinottoa(double n)
{
	char			*res;
	signed	int		exponent;

	exponent = 0; 
	if (n < 1)
	{
		while (n < 1)
		{
			exponent--;
			n *= 10;
		}
	}
	else while (n >= 10)
	{
		exponent++;
		n /= 10;
	}
	res = ft_strjoin(ft_ftoa(n), "e", 1);
	if (exponent > 0) 
		res = ft_strjoin(ft_strjoin(res, "+", 1), ft_itoa(exponent), 3);
	else if (exponent < 0) 
		res = ft_strjoin(res, ft_itoa(exponent), 3);
	return (res);
}

int main()
{
	// printf("\nres 1 : |%e|\n", 0);
	// printf("\nres 2 : |%s|\n", ft_scinottoa(0));
	printf("\nres 1 : |%e|\n", 1234.5678);
	printf("\nres 2 : |%s|\n", ft_scinottoa(1234.5678));
	printf("\nres 1 : |%e|\n", 10000000000000);
	printf("\nres 2 : |%s|\n", ft_scinottoa(10000000000000));
	printf("\nres 1 : |%e|\n", 99999.9999999);
	printf("\nres 2 : |%s|\n", ft_scinottoa(99999.9999999));
	printf("\nres 1 : |%e|\n", 0.00000000001);
	printf("\nres 2 : |%s|\n", ft_scinottoa(0.00000000001));
}