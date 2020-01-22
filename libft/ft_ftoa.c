/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:25:40 by abarot            #+#    #+#             */
/*   Updated: 2020/01/22 15:29:04 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_get_size_and_sign_digit(double fl, int *size, int *signif_dig)
{
	if (*size == 0)
	{
		*size = 6;
		*signif_dig = *size;
	}
	else
	{
		if (fl < 0)
			fl = -fl;
		while (fl >= 1)
		{
			*signif_dig = *signif_dig + 1;
			fl /= 10;
		}
	}
}

char	*ft_ftoa(double fl, int size)
{
	char	*res;
	char	*res_dec;
	int		i;
	int		signif_dig;

	i = 0;
	signif_dig = size;
	ft_get_size_and_sign_digit(fl, &size, &signif_dig);
	if (fl == 0 || fl > 100000000000000000 ||
		(fl > 0 && fl < 0.000000000000000001))
		return (ft_strdup("0.000000"));
	while (fl < 100000000000000000 && i < signif_dig - 1)
	{
		fl = fl * 10;
		i++;
	}
	res = ft_ltoa(fl);
	res = ft_rounded_ascii(res);
	while (i++ <= size)
		res = ft_strjoin(res, "0", 1);
	res_dec = ft_strdup(res + ft_strlen(res) - size);
	res[ft_strlen(res) - size] = '\0';
	res = ft_strjoin(ft_strjoin(res, ".", 1), res_dec, 3);
	return (res);
}
