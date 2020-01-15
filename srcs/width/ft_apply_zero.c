#include "libftprintf.h"

void	ft_apply_zero(t_spec *spec)
{
	char	*tmp;

	(spec->type == CHAR) ? ft_apply_no_flag(spec) : 0;
	if ((spec->type == SIGNED_INT || spec->type == HEXADEC ||
		spec->type == CAP_HEXADEC) && spec->arg_as_a_string[0] == '-')
	{
		while (spec->width > (int)ft_strlen(spec->arg_as_a_string))
		{
			tmp = spec->arg_as_a_string;
			spec->arg_as_a_string = ft_strjoin("-0", (spec->arg_as_a_string) + 1, 0);
			(tmp) ? free(tmp) : 0;
		}
	}
	else if (spec->type == SIGNED_INT && spec->space_plus_hashtag_flag == PLUS)
		spec->width--;
	while (spec->width > (int)ft_strlen(spec->arg_as_a_string))
		spec->arg_as_a_string = ft_strjoin("0", spec->arg_as_a_string, 2);
}
