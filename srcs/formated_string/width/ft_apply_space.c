#include "libftprintf.h"

ft_apply_space(t_spec *spec)
{
	int	i_str;

	i_str = 0;
	while (spec->arg_as_a_string[i_str] == ' ')
		i_str++;
	if (spec->arg_as_a_string[i_str] != '-')
		spec->arg_as_a_string = ft_strjoin(" ", spec->arg_as_a_string, 2);
}
