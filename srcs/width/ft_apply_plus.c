#include "libftprintf.h"

void	ft_apply_plus(t_spec *spec)
{
	int	i_str;

	i_str = 0;
	if (spec->arg_as_a_string[i_str] != '-' && spec->type == SIGNED_INT)
		spec->arg_as_a_string = ft_strjoin("+", spec->arg_as_a_string, 2);
}
