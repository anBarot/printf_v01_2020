/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:19:14 by abarot            #+#    #+#             */
/*   Updated: 2020/01/21 15:38:58 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char		*res;
	int			i;
	long int	nbr;

	if (!(res = (char*)malloc(sizeof(char) * 12)))
		return (0);
	nbr = n;
	i = 0;
	if (nbr < 0)
	{
		res[i++] = '-';
		nbr = -nbr;
	}
	if (!nbr)
		return (ft_char_to_str('0'));
	while (nbr >= 1)
	{
		res[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i++;
	}
	res[i] = '\0';
	return (ft_reverse_string(res));
}
