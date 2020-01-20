/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:25:33 by abarot            #+#    #+#             */
/*   Updated: 2020/01/20 11:25:34 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_char_to_string(int c)
{
	char	*res;

	if (!(res = ft_calloc(2, sizeof(char))))
		return (0);
	res[0] = c;
	return (res);
}
