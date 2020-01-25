/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scinottoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:52:35 by abarot            #+#    #+#             */
/*   Updated: 2020/01/25 16:16:10 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_exponent(double n, int exponent)
{
	while (n > (double)10)
	{
		n /= 10;
		exponent++;
	}
	while (n < (double)1)
	{
		n *= 10;
		exponent--;
	}
	if (exponent < 0)
		return (ft_strjoin("e", ft_itoa(exponent), 2));
	else if (exponent < 10)
		return (ft_strjoin("e+0", ft_itoa(exponent), 2));
	else
		return (ft_strjoin("e+", ft_itoa(exponent), 2));
}

void	ft_rounded_to_ten_scinot(char *str, char *exponent)
{
	int i_str;

	i_str = 0;
	if (ft_atoi(str) == 10 || ft_atoi(str) == -10)
	{
		while (str[i_str] != '.')
			i_str++;
		str[i_str] = '0';
		str[i_str - 1] = '.';
		str[ft_strlen(str) - 1] = '\0';
		if (exponent[ft_strlen(exponent) - 1] != 9)
			exponent[ft_strlen(exponent) - 1]++;
		else
		{
			exponent[ft_strlen(exponent) - 1] = '0';
			exponent[ft_strlen(exponent) - 2]++;
		}
	}
}

char	*ft_scinottoa(double n, int size)
{
	char	*res;
	char	*exponent;
	int		sign;

	sign = 1;
	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	exponent = ft_get_exponent(n, 0);
	while (n >= 10 || n < (double)0)
	{
		if (n >= 10)
			n /= 10;
		else
			n *= 10;
	}
	res = ft_ftoa(n * sign, size);
	ft_rounded_to_ten_scinot(res, exponent);
	return (res = ft_strjoin(res, exponent, 3));
}
