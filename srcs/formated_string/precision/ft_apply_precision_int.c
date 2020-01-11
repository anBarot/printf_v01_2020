#include "libftprintf.h"

void	ft_apply_precision_int(t_spec *spec)
{
	while (spec->size > ft_strlen(spec->arg_as_a_string))
		spec->arg_as_a_string = ft_strjoin("0", spec->arg_as_a_string, 2);
}