/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:25:40 by abarot            #+#    #+#             */
/*   Updated: 2020/01/20 18:06:18 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ftoa(double fl)
{
	char	*res;
	char	*res_dec;
	char	*res_int;
	int		i;

	i = 4;
	if (fl == 0 || fl < 0.0000009)
		return (ft_strdup("0.000000"));
	if (fl < 0)
		i++;
	fl = fl * 10000000;
	res = ft_ltoa(fl);
	// printf("\nres : %s\n", res); 	
	ft_rounded_ascii(res);
	res_dec = ft_strdup(res + i);
	// printf("\nres dec: %s\n", res_dec); 	
	res[i] = '\0';
	res_int = ft_strdup(res);
	// printf("\nres int: %s\n", res_int); 	
	res = ft_strjoin(ft_strjoin(res_int, ft_strdup("."), 3), res_dec, 3);
	return (res);
}

// int main()
// {
// 	printf("\nres 1 : |%f|\n", 0);
// 	printf("\nres 2 : |%s|\n", ft_ftoa(0));
// 	printf("\nres 1 : |%f|\n", 1234.5678);
// 	printf("\nres 2 : |%s|\n", ft_ftoa(1234.5678));
// 	printf("\nres 1 : |%f|\n", 10000000000000);
// 	printf("\nres 2 : |%s|\n", ft_ftoa(10000000000000));
// 	printf("\nres 1 : |%f|\n", 1000000000000);
// 	printf("\nres 2 : |%s|\n", ft_ftoa(1000000000000));
// 	printf("\nres 1 : |%f|\n", 99999.9999999);
// 	printf("\nres 2 : |%s|\n", ft_ftoa(99999.9999999));
// 	printf("\nres 1 : |%f|\n", -99999.9999999);
// 	printf("\nres 2 : |%s|\n", ft_ftoa(-99999.9999999));
// 	printf("\nres 1 : |%f|\n", 0.00000000001);
// 	printf("\nres 2 : |%s|\n", ft_ftoa(0.00000000001));
// }