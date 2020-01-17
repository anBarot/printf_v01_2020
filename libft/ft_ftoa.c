#include "libft.h"

char	*ft_ftoa(double fl)
{
	char	*int_number;
	char	*dec_number;
	char	*res;
	float	fl_decimal;

	fl_decimal = (fl - (long long)fl) * 10000000;
	if (fl < 0)
		fl_decimal = -fl_decimal;
	int_number = ft_ltoa((long long)fl);
	dec_number = ft_ltoa(fl_decimal);
	if (ft_strlen(dec_number) >= 7)
		dec_number[6] = '\0';
	dec_number = ft_rounded_ascii(dec_number);
	while (ft_strlen(dec_number) < 7)
		dec_number = ft_strjoin(dec_number, "0", 1);
	res = ft_strjoin(ft_strjoin(int_number, ".", 1), dec_number, 3);
	res = ft_rounded_ascii(res);
	return (res);
}
