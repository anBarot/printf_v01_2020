#include "libftprintf.h"

void	ft_apply_precision_address(t_spec *spec)
{
	char	*tmp;

	while (spec->size > (int)ft_strlen(spec->arg_as_a_string) - 2)
	{
		tmp = spec->arg_as_a_string;
		spec->arg_as_a_string = ft_strjoin("0x0", spec->arg_as_a_string + 2, 0);
		(tmp) ? free(tmp) : 0;
	}
}
