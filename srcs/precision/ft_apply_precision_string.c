#include "libftprintf.h"

void	ft_apply_precision_string(t_spec *spec)
{
	if (spec->precision == 1 && (spec->size == 0 || spec->arg_as_a_string == 0))
	{
		free(spec->arg_as_a_string);
		spec->arg_as_a_string = ft_strdup("\0");
	}
	else
		spec->arg_as_a_string[spec->size] = '\0';
}
