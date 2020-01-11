#include "libftprintf.h"

ft_apply_zero(t_spec *spec)
{
	while (spec->width < ft_strlen(spec->arg_as_a_string))
		spec->arg_as_a_string = ft_strjoin("0", ft_strlen(spec->arg_as_a_string), 2);
}
