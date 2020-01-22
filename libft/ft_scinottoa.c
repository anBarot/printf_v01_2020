/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scinottoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:52:35 by abarot            #+#    #+#             */
/*   Updated: 2020/01/21 16:52:35 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_exponent(char *res, int exponent)
{
	if (exponent >= 0 && exponent < 10)
		res = ft_strjoin(ft_strjoin(res, "+", 1),
		ft_strjoin("0", ft_itoa(exponent), 2), 3);
	else if (exponent > 0)
		res = ft_strjoin(ft_strjoin(res, "+", 1), ft_itoa(exponent), 3);
	else if (exponent < 0)
		res = ft_strjoin(res, ft_itoa(exponent), 3);
	return (res);
}

char	*ft_scinottoa(double n, int size)
{
	char	*res;
	int		exponent;
	int		sign;

	exponent = 0;
	sign = 1;
	(size == 0) ? size = 6 : 0;
	if (n == (double)0)
		return (ft_strdup("0.000000e+00"));
	if (n < (double)0)
	{
		n = -n;
		sign = -1;
	}
	while (n < (double)1)
	{
		exponent--;
		n *= 10;
	}
	while (n > 9.9999999)
	{
		exponent++;
		n /= 10;
	}
	res = ft_ftoa(n * sign, size + 1);
	res[size + exponent + 1] = '\0';
	res = ft_strjoin(res, "e", 1);
	return (res = ft_get_exponent(res, exponent));
}
