#include "libftprintf.h"

char	*ft_apply_spec(t_spec *spec)
{
	char	*res;

	(spec->precision) ? ft_apply_prec(spec) : 0;
	(spec->width) ? ft_apply_width(spec) : 0;
	res = ft_strdup(spec->arg_as_a_string);
	return (res);
}

void	ft_apply_width(t_spec *spec)
{
	(spec->zero_less_flag == NO_FLAG) ? ft_apply_no_flag(spec) : 0;
	(spec->space_plus_hashtag_flag == SPACE) ? ft_apply_flag_space(spec) : 0;
	(spec->space_plus_hashtag_flag == PLUS) ? ft_apply_flag_plus(spec) : 0;
	(spec->space_plus_hashtag_flag == HASHTAG) ? ft_apply_flag_hashtag(spec) : 0;
	(spec->zero_less_flag == LESS) ? ft_apply_flag_less(spec) : 0;
	(spec->zero_less_flag == ZERO) ? ft_apply_flag_zero(spec) : 0;
}

void	ft_apply_precision(t_spec *spec)
{
	(spec->type == STRING) ? ft_apply_precision_string(spec) : 0;
	(spec->type == ADDRESS) ? ft_apply_precision_string(spec) : 0;
	(spec->type == CHAR || spec->type == PERC) ? ft_apply_precision_char(spec) : 0;
	(spec->type == UNSIGNED_INT || spec->type == SIGNED_INT || spec->type == HEXADEC
	|| spec->type == CAP_HEXADEC) ? ft_apply_precision_int(spec) : 0;
}
