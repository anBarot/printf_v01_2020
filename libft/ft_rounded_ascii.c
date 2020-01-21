/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rounded_ascii.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:26:36 by abarot            #+#    #+#             */
/*   Updated: 2020/01/21 14:44:38 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rounded_ascii_ifnine(char *str, int *i_str)
{
	while (i_str)
	{
		if (str[*i_str - 1] == '9' || str[*i_str - 1] == '.')
			(str[*i_str] != '.') ? str[*i_str] = '0' : 0;
		else if (str[*i_str - 1] == '-')
		{
			str[*i_str] = '0';
			str[*i_str - 1] = '1';
			str = ft_strjoin("-", str, 2);
			break ;
		}
		else if (str[*i_str - 1] == '+')
		{
			str[*i_str] = '0';
			str[*i_str - 1] = '1';
			str = ft_strjoin("+", str, 2);
			break ;
		}
		if (!(*i_str - 1) && str[*i_str - 1] == '9')
		{
			str[*i_str - 1] = '0';
			str = ft_strjoin("1", str, 2);
		}
		*i_str = *i_str - 1;
	}
}

char	*ft_rounded_ascii(char *str)
{
	int i_str;

	i_str = ft_strlen(str) - 1;
	if (!str)
		return (0);
	if (str[i_str] <= '5')
	{
		str[i_str] = '\0';
		return (str);
	}
	while (i_str)
	{
		if (str[i_str - 1] >= '0' && str[i_str - 1] < '9')
		{
			(str[i_str] != '.') ? str[i_str] = '0' : 0;
			str[i_str - 1] += 1;
			break ;
		}
		else
			ft_rounded_ascii_ifnine(str, &i_str);
	}
	str[ft_strlen(str) - 1] = '\0';
	return (str);
}
