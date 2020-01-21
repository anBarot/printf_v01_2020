/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:25:40 by abarot            #+#    #+#             */
/*   Updated: 2020/01/21 13:51:23 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ftoa(double fl)
{
	char	*res;
	char	*res_dec;
	char	*res_int;
	int		i;

	i = 0;
	if (fl == 0 || fl > 100000000000000000 ||
		ft_strlen(ft_itoa(fl * 1000000)) == 1)
		return (ft_strdup("0.000000"));
	while (fl < 100000000000000000 && i < 7)
	{
		fl = fl * 10;
		i++;
	}
	res = ft_ltoa(fl);
	while (i++ < 7)
		res = ft_strjoin(res, "0", 1);
	res = ft_rounded_ascii(res);
	res_dec = ft_strdup(res + ft_strlen(res) - 6);
	res[ft_strlen(res) - 6] = '\0';
	res_int = ft_strdup(res);
	res = ft_strjoin(ft_strjoin(res_int, ft_strdup("."), 3), res_dec, 3);
	return (res);
}
