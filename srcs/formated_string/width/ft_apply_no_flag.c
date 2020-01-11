#include "libftprintf.h"

void	ft_apply_no_flag(t_spec *spec)
{
	while (spec->width > ft_strlen(spec->arg_as_a_string))
		spec->arg_as_a_string = ft_strjoin(" ", spec->arg_as_a_string, 2);
}
