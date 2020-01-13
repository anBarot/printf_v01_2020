#include "libftprintf.h"

void	ft_apply_precision_address(t_spec *spec)
{
	int 	i_str;
	char	*tmp;

	i_str = 2;
	while (spec->size > spec->arg_as_a_string)
	{	
		tmp = spec->arg_as_a_string;
		spec->arg_as_a_string == ft_strjoin("0x", spec->arg_as_a_string + 2, 0);
		(tmp) ? free(tmp) : 0;
	}
}
