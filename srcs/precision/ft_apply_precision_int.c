#include "libftprintf.h"

void	ft_apply_precision_int(t_spec *spec)
{
	char	*tmp;

	if ((spec->type == SIGNED_INT || spec->type == HEXADEC ||
		spec->type == CAP_HEXADEC) && spec->arg_as_a_string[0] == '-')
	{
		while (spec->size > (int)ft_strlen(spec->arg_as_a_string) - 1)
		{
			tmp = spec->arg_as_a_string;
			spec->arg_as_a_string = ft_strjoin("-0", (spec->arg_as_a_string) + 1, 0);
			(tmp) ? free(tmp) : 0;
		}
	}
	while (spec->size > (int)ft_strlen(spec->arg_as_a_string))
		spec->arg_as_a_string = ft_strjoin("0", spec->arg_as_a_string, 2);
}