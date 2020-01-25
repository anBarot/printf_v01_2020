/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:25:40 by abarot            #+#    #+#             */
/*   Updated: 2020/01/25 15:49:02 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_dtoa(double n)
{
	char				*res;
	int					i;
	unsigned long long	nbr;

	if (!(res = (char*)ft_calloc(sizeof(char), 21)))
		return (0);
	i = 0;
	nbr = n;
	if (n < 0)
	{
		res[i++] = '-';
		nbr = -n;
	}
	while (nbr >= 1)
	{
		res[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i++;
	}
	return (ft_reverse_string(res));
}

char	*ft_get_f_string(double fl, int size)
{
	char	*res_dec;
	char	*res;

	res = ft_dtoa(fl);
	res_dec = ft_strjoin(".", ft_strdup(res + ft_strlen(res) - size), 2);
	res[ft_strlen(res) - size] = '\0';
	return (ft_strjoin(res, res_dec, 3));
}

char	*ft_ftoa(double fl, int size)
{
	int		mult;
	int		sign;

	if (fl > (double)0 && fl < 0.0000000000000001)
		return (ft_strdup("0.000000"));
	(size <= 0) ? size = 6 : 0;
	mult = 0;
	sign = 1;
	if (fl < 0)
	{
		fl = -fl;
		sign = -1;
	}
	while (mult < size + 1)
	{
		fl = fl * 10;
		mult++;
	}
	if ((long long)fl % 10 <= 5)
		fl = fl / 10;
	else
		fl = (fl / 10) + 1;
	return (ft_get_f_string(fl * sign, size));
}
