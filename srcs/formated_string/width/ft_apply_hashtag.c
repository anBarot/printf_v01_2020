#include "libftprintf.h"

void	ft_apply_hashtag(t_spec *spec)
{
	if (spec->type == HEXADEC && spec->arg_as_a_string[0] != '0')
		spec->arg_as_a_string = ft_strjoin("0x", spec->arg_as_a_string, 2);
	else if (spec->type == CAP_HEXADEC && spec->arg_as_a_string[0] != '0')
		spec->arg_as_a_string = ft_strjoin("0X", spec->arg_as_a_string, 2);
}
