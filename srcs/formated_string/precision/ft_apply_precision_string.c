#include "libftprintf.h"

void	ft_apply_precision_string(t_spec *spec)
{
	spec->arg_as_a_string[spec->size] = '\0';
}
