#include "libftprintf.h"

void	ft_apply_zero(t_spec *spec)
{
	if (spec->type == CHAR)
	{
		spec->zero_less_flag = NO_FLAG_ZERO_LESS;
		return ;
	}
	if ((spec->type == HEXADEC || spec->type == CAP_HEXADEC) && spec->hashtag_flag)
		spec->width -= 2;
	if (spec->type == SIGNED_INT && (spec->arg_as_a_string[0] == '-' || spec->arg_as_a_string[0] == '+' || spec->arg_as_a_string[0] == ' '))
	{
		spec->arg_as_a_string[0] = '0';
		while (spec->width > (int)ft_strlen(spec->arg_as_a_string))
			spec->arg_as_a_string = ft_strjoin("0", spec->arg_as_a_string, 2);
		(spec->space_plus_flag == PLUS) ? spec->arg_as_a_string[0] = '+' : 0;  
		(spec->space_plus_flag == SPACE) ? spec->arg_as_a_string[0] = ' ' : 0;  
		(!spec->space_plus_flag) ? spec->arg_as_a_string[0] = '-' : 0;  
	}
	while (spec->width > (int)ft_strlen(spec->arg_as_a_string))
		spec->arg_as_a_string = ft_strjoin("0", spec->arg_as_a_string, 2);
}
