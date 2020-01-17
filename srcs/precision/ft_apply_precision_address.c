#include "libftprintf.h"

void	ft_apply_precision_address(t_spec *spec)
{
	spec->arg_as_a_string[1] = '0';
	while (spec->size > (int)ft_strlen(spec->arg_as_a_string) - 2)
		spec->arg_as_a_string = ft_strjoin("0x0", spec->arg_as_a_string + 2, 0);
	spec->arg_as_a_string[1] = 'x';
}
