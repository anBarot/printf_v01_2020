#include "libftprintf.h"

void		ft_apply_precision_float(t_spec *spec)
{
	int i_str;

	i_str = 0;
	while (spec->arg_as_a_string[i_str] != '.' && spec->arg_as_a_string[i_str])
		i_str++;
	if (!spec->arg_as_a_string[i_str])
		return ;
	if (spec->size == 0)
	{
		spec->arg_as_a_string[spec->size + i_str] = '\0';
		return ;
	}
	if ((int)(ft_strlen(spec->arg_as_a_string) - i_str - 2) >= spec->size)
		spec->arg_as_a_string[spec->size + i_str + 2] = '\0';
	spec->arg_as_a_string = ft_rounded_ascii(spec->arg_as_a_string);
	while ((int)ft_strlen(spec->arg_as_a_string) < (spec->size + i_str + 1))
		spec->arg_as_a_string = ft_strjoin(spec->arg_as_a_string, "0", 1);
}
