/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:25:40 by abarot            #+#    #+#             */
/*   Updated: 2020/01/21 18:02:04 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_adjust_significant_digit(double fl, int *significant_dig)
{
	if (fl < 0)
		fl = -fl;
	while (fl >= 1)
	{	
		*significant_dig = *significant_dig + 1;
		fl /= 10; 
	}
}

char	*ft_ftoa(double fl, int size)
{
	char	*res;
	char	*res_dec;
	int		i;
	int		signif_dig;

	i = 0;
	if (size == 0)  
	{	
		size = 6;
		signif_dig = size;
	}
	else
	{
		signif_dig = size;
		ft_adjust_significant_digit(fl, &signif_dig);
	}
	if (fl == 0 || fl > 100000000000000000 ||
		ft_strlen(ft_itoa(fl * 1000000)) == 1)
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
	res = ft_strjoin(ft_strjoin(res, ft_strdup("."), 3), res_dec, 3);
	return (res);
}
