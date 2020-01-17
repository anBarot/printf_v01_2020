#include "libftprintf.h"

void	ft_apply_precision_number(t_spec *spec)
{
	if ((spec->type == SIGNED_INT || spec->type == HEXADEC ||
		spec->type == CAP_HEXADEC) && (spec->arg_as_a_string[0] == '-'
		|| spec->arg_as_a_string[0] == '+' || spec->arg_as_a_string[0] == ' '))
	{
		spec->arg_as_a_string[0] = '0';
		while (spec->size > (int)ft_strlen(spec->arg_as_a_string) - 1)
			spec->arg_as_a_string = ft_strjoin("0", spec->arg_as_a_string, 2);
		(!spec->space_plus_flag) ? spec->arg_as_a_string[0] = '-' : 0;
		(spec->space_plus_flag == SPACE) ? spec->arg_as_a_string[0] = ' ' : 0;
		(spec->space_plus_flag == PLUS) ? spec->arg_as_a_string[0] = '+' : 0;
	}
	while (spec->size > (int)ft_strlen(spec->arg_as_a_string))
		spec->arg_as_a_string = ft_strjoin("0", spec->arg_as_a_string, 2);
}