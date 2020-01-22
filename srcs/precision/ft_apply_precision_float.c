#include "libftprintf.h"

void	ft_apply_precision_float(t_spec *spec)
{
	int i_str;

	i_str = 0;
	while (spec->arg_str[i_str] != '.')
		i_str++;
	spec->arg_str[i_str] = '\0';
}