#include "libftprintf.h"

void	ft_apply_plus(t_spec *spec)
{
	if (spec->arg_as_a_string[0] != '-' && (spec->type == SIGNED_INT || spec->type == FLOAT))
		spec->arg_as_a_string = ft_strjoin("+", spec->arg_as_a_string, 2);
}
