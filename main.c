/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:16:04 by abarot            #+#    #+#             */
/*   Updated: 2020/01/25 16:16:32 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

//test precision neg pour string

static int res1 = 0;
static int res2 = 0;

void	test1(void)
{
	res1 = ft_printf("test without arg\n");
	res2 = printf("test without arg\n");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test very long without arggggggggggggggggggggggggggggggg\n");
	res2 = printf("test very long without arggggggggggggggggggggggggggggggg\n");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("");
	res2 = printf("");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test if '\0'");
	res2 = printf("test if '\0'");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test2(void)
{
	res1 = ft_printf("test string arg : %s\n", "abcde");
	res2 = printf("test string arg : %s\n", "abcde");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test string arg : %s\n", "123456789");
	res2 = printf("test string arg : %s\n", "123456789");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test string multiple arg : %s %s\n", "123456789", "abcde");
	res2 = printf("test string multiple arg : %s %s\n", "123456789", "abcde");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test arg 0 : %s\n", 0);
	res2 = printf("test arg 0 : %s\n", 0);
	printf("res1 : %d, res2 : %d\n\n", res1, res2);
}

void	test3(void)
{
	res1 = ft_printf("test min int arg : %d\n", -2147483648);
	res2 = printf("test min int arg : %d\n", -2147483648);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test max int arg : %d\n", 2147483647);
	res2 = printf("test max int arg : %d\n", 2147483647);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test too long int arg : %d\n", 214748364799);
	res2 = printf("test too long int arg : %d\n", 214748364799);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test arg 0 : %d\n", 0);
	res2 = printf("test arg 0 : %d\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test4()
{
	res1 = ft_printf("test character 1 arg : %c\n", 'a');
	res2 = printf("test character 1 arg : %c\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test character 1 arg : %c\n", 97);
	res2 = printf("test character 1 arg : %c\n", 97);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test character multiple arg : %c %c\n", 97, 48);
	res2 = printf("test character multiple arg : %c %c\n", 97, 48);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test character multiple arg : %c %c\n", 95, 0);
	res2 = printf("test character multiple arg : %c %c\n", 95, 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test arg 0 : %c\n", 0);
	res2 = printf("test arg 0 : %c\n", 0);
	printf("res1 : %d, res2 : %d\n\n", res1, res2);
}

void	test5()
{
	res1 = ft_printf("test min int arg : %i\n", -2147483648);
	res2 = printf("test min int arg : %i\n", -2147483648);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test max int arg : %i\n", 2147483647);
	res2 = printf("test max int arg : %i\n", 2147483647);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test too long int arg : %i\n", 214748364799);
	res2 = printf("test too long int arg : %i\n", 214748364799);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test arg 0 : %i\n", 0);
	res2 = printf("test arg 0 : %i\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test6()
{
	res1 = ft_printf("test negative int arg : %u\n", -4294967295);
	res2 = printf("test negative int arg : %u\n", -4294967295);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test max int arg : %u\n", 4294967295);
	res2 = printf("test max int arg : %u\n", 4294967295);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test too long int arg : %u\n", 214748364799);
	res2 = printf("test too long int arg : %u\n", 214748364799);
	printf("\nres1 : %d, res2 : %u\n\n", res1, res2);
	res1 = ft_printf("test arg 0 : %u\n", 0);
	res2 = printf("test arg 0 : %u\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test7()
{
	int     el1 = 58;
	char    *el2 = "0123456879";
	char    el3 = 'a';
	char    el4 = 97;
	res1 = ft_printf("test address of int : %p\n", &el1);
	res2 = printf("test address of int : %p\n", &el1);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test address of char* : %p\n", &el2);
	res2 = printf("test address of char* : %p\n", &el2);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test address of char : %p\n", &el3);
	res2 = printf("test address of char : %p\n", &el3);
	printf("\nres1 : %d, res2 : %u\n\n", res1, res2);
	res1 = ft_printf("test address of char : %p\n", &el4);
	res2 = printf("test address of char : %p\n", &el4);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test address 0 : %p\n", 0);
	res2 = printf("test address 0 : %p\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test address : %p\n", '\0');
	res2 = printf("test address : %p\n", '\0');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test8()
{
	int     el1 = 58;
	char    *el2 = "0123456879";
	char    el3 = 'a';
	char    el4 = 97;
	res1 = ft_printf("test address of int : %x\n", el1);
	res2 = printf("test address of int : %x\n", el1);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test address of char* : %x\n", &el2);
	res2 = printf("test address of char* : %x\n", &el2);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test address of char : %x\n", &el3);
	res2 = printf("test address of char : %x\n", &el3);
	printf("\nres1 : %d, res2 : %u\n\n", res1, res2);
	res1 = ft_printf("test address of char : %x\n", &el4);
	res2 = printf("test address of char : %x\n", &el4);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test address 0 : %x\n", 0);
	res2 = printf("test address 0 : %x\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test address : %x\n", '\0');
	res2 = printf("test address : %x\n", '\0');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test9()
{
	int     el1 = 58;
	char    *el2 = "0123456879";
	char    el3 = 'a';
	char    el4 = 97;
	res1 = ft_printf("test address of int : %X\n", &el1);
	res2 = printf("test address of int : %X\n", &el1);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test address of char* : %X\n", &el2);
	res2 = printf("test address of char* : %X\n", &el2);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test address of char : %X\n", &el3);
	res2 = printf("test address of char : %X\n", &el3);
	printf("\nres1 : %d, res2 : %u\n\n", res1, res2);
	res1 = ft_printf("test address of char : %X\n", &el4);
	res2 = printf("test address of char : %X\n", &el4);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test address 0 : %X\n", 0);
	res2 = printf("test address 0 : %X\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test address : %X\n", '\0');
	res2 = printf("test address : %X\n", '\0');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test10(void)
{
	res1 = ft_printf("test %%\n");
	res2 = printf("test %%\n");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test [%%]\n");
	res2 = printf("test [%%]\n");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test %%%% djlkjlkj\n");
	res2 = printf("test %%%% djlkjlkj\n");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test11(void)
{
	char el1 = '1';
	char *p_el1 = &el1;
	res1 = ft_printf("test %d %i %s %c %u %x %X %p %%\n", 
				-2147483648, -2147483648, "abcde", 'a', 4294967295, p_el1, p_el1, p_el1);
	res2 = printf("test %d %i %s %c %u %x %X %p %%\n", 
				-2147483648, -2147483648, "abcde", 'a', 4294967295, p_el1, p_el1, p_el1);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test12(void)
{
	res1 = ft_printf("test |-0d| :  %-0d\n", 2144);
	res2 = printf("test |-0d| :  %-0d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-04d| :  %-04d  aaa\n", 2144);
	res2 = printf("test |-04d| :  %-04d  aaa\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-06d| :  %-06d  aaa\n", 2144);
	res2 = printf("test |-06d| :  %-06d  aaa\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-010d| :  %-010d  aaa\n", 2144);
	res2 = printf("test |-010d| :  %-010d  aaa\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-0000010d| :  %-0000010d  aaa\n", 2144);
	res2 = printf("test |-0000010d| :  %-0000010d  aaa\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-0d| :  %-0d  aaa\n", -2144);
	res2 = printf("test |-0d| :  %-0d  aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-04d| :  %-04d  aaa\n", -2144);
	res2 = printf("test |-04d| :  %-04d  aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-06d| :  %-06d  aaa\n", -2144);
	res2 = printf("test |-06d| :  %-06d  aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-010d| :  %-010d  aaa\n", -2144);
	res2 = printf("test |-010d| :  %-010d  aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-0000010d| :  %-0000010d  aaa\n", -2144);
	res2 = printf("test |-0000010d| :  %-0000010d  aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.0d| :  %.0d\n", 0);
	res2 = printf("test |.0d| :  %.0d\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test13(void)
{
	res1 = ft_printf("test |0d|: %0d\n", 2144);
	res2 = printf("test |0d|: %0d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |04d|: %04d\n", 2144);
	res2 = printf("test |04d|: %04d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |06d|: %06d\n", 2144);
	res2 = printf("test |06d|: %06d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |010d|: %010d\n", 2144);
	res2 = printf("test |010d|: %010d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |0000010d|: %0000010d\n", 2144);
	res2 = printf("test |0000010d|: %0000010d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |0d|: %0d\n", -2144);
	res2 = printf("test |0d|: %0d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |04d|: %04d\n", -2144);
	res2 = printf("test |04d|: %04d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |06d|: %06d\n", -2144);
	res2 = printf("test |06d|: %06d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |010d|: %010d\n", -2144);
	res2 = printf("test |010d|: %010d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |0000010d|: %0000010d\n", -2144);
	res2 = printf("test |0000010d|: %0000010d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test14(void)
{
	res1 = printf("test |.0d|: %.0d aaa\n", -2144);
	res2 = printf("test |.0d|: %.0d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.4d|: %.4d aaa\n", -2144);
	res2 = printf("test |.4d|: %.4d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.6d|: %.6d aaa\n", -2144);
	res2 = printf("test |.6d|: %.6d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.08d|: %.08d aaa\n", -2144);
	res2 = printf("test |.08d|: %.08d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.0d|: %-.0d aaa\n", -2144);
	res2 = printf("test |-.0d|: %-.0d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.4d|: %-.4d aaa\n", -2144);
	res2 = printf("test |-.4d|: %-.4d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.6d|: %-.6d aaa\n", -2144);
	res2 = printf("test |-.6d|: %-.6d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.8d|: %-.8d aaa\n", -2144);
	res2 = printf("test |-.8d|: %-.8d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |010.8d|: %010.8d aaa\n", -21);
	res2 = printf("test |010.8d|: %010.8d aaa\n", -21);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |010.2d|: %010.2d aaa\n", -21);
	res2 = printf("test |010.2d|: %010.2d aaa\n", -21);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |010.5d|: %010.5d aaa\n", -21);
	res2 = printf("test |010.5d|: %010.5d aaa\n", -21);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);

}

void	test15(void)
{
	res1 = ft_printf("test |*d| 5 : %*d\n", 5, -2144);
	res2 = printf("test |*d| 5 : %*d\n", 5, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |*d| 4 : %*d\n", 4, -2144);
	res2 = printf("test |*d| 4 : %*d\n", 4, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |*d| 6 : %*d\n", 6, -2144);
	res2 = printf("test |*d| 6 : %*d\n", 6, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |*d| 8 : %*d\n", 8, -2144);
	res2 = printf("test |*d| 8 : %*d\n", 8, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*d| 0 : %.*d\n", 0, -2144);
	res2 = printf("test |.*d| 0 : %.*d\n", 0, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*d| 4 : %.*d\n", 4, -2144);
	res2 = printf("test |.*d| 4 : %.*d\n", 4, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*d| 6 : %.*d\n", 6, -2144);
	res2 = printf("test |.*d| 6 : %.*d\n", 6, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*d| 8 : %.*d\n", 8, -2144);
	res2 = printf("test |.*d| 8 : %.*d\n", 8, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*d| -15 : |%10.*d|\n", -15, -2144);
	res2 = printf("test |.*d| -15 : |%10.*d|\n", -15, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*d| 8 : |%*10.d|\n", -8, -2144);
	res2 = printf("test |.*d| 8 : |%*10.d|\n", -8, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*d| 8 : |%*10.-d|\n", 8, -2144);
	res2 = printf("test |.*d| 8 : |%*10.-d|\n", 8, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test16(void)
{
	res1 = ft_printf("test |*u|: %*u\n", 0, 2144);
	res2 = printf("test |*u|: %*u\n", 0, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |*u|: %*u\n", 4, 2144);
	res2 = printf("test |*u|: %*u\n", 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |*u|: %*u\n", 6, 2144);
	res2 = printf("test |*u|: %*u\n", 6, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |*u|: %*u\n", 8, 2144);
	res2 = printf("test |*u|: %*u\n", 8, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*u|: %.*u\n", 0, 2144);
	res2 = printf("test |.*u|: %.*u\n", 0, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*u|: %.*u\n", 4, 2144);
	res2 = printf("test |.*u|: %.*u\n", 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*u|: %.*u\n", 6, 2144);
	res2 = printf("test |.*u|: %.*u\n", 6, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*u|: %.*u\n", 8, 2144);
	res2 = printf("test |.*u|: %.*u\n", 8, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test17(void)
{
	res1 = ft_printf("test |0d|: %0d\n", 2144);
	res2 = printf("test |0d|: %0d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |04d|: %04d\n", 2144);
	res2 = printf("test |04d|: %04d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |06d|: %06d\n", 2144);
	res2 = printf("test |06d|: %06d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |010d|: %010d\n", 2144);
	res2 = printf("test |010d|: %010d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |0000010d|: %0000010d\n", 2144);
	res2 = printf("test |0000010d|: %0000010d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |0d|: %0d\n", -2144);
	res2 = printf("test |0d|: %0d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |04d|: %04d\n", -2144);
	res2 = printf("test |04d|: %04d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |06d|: %06d\n", -2144);
	res2 = printf("test |06d|: %06d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |010d|: %010d\n", -2144);
	res2 = printf("test |010d|: %010d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |0000010d|: %0000010d\n", -2144);
	res2 = printf("test |0000010d|: %0000010d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test18(void)
{
	res1 = ft_printf("test |.**.-d| : |%.**.-d|\n", 10, 10, 2144);
	res2 = printf("test |.**.-d| : |%.**.-d|\n", 10, 10, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |d| : |%d|\n", 1,2,3, 4, 2144);
	res2 = printf("test |d| : |%d|\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |**d| : |%**d|\n", 1,2,3, 4, 2144);
	res2 = printf("test |**d| : |%**d|\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |***.*d| : |%***.*d|\n", 1,2,3, 7, 2144);
	res2 = printf("test |***.*d| : |%***.*d|\n", 1,2,3, 7, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |*yolo| : |%*yolo|\n", 1,2,3, 4, 2144);
	res2 = printf("test |*yolo| : |%*yolo|\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |..*yolo| : |%..*yolo|\n", 1,2,3, 4, 2144);
	res2 = printf("test |..*yolo| : |%..*yolo|\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |..*dyolo| : |%..*dyolo|\n", 1,2,3, 4, 2144);
	res2 = printf("test |..*dyolo| : |%..*dyolo|\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test19(void)
{
	res1 = ft_printf("test |4s| : |%4s|\n", "bonjour");
	res2 = printf("test |4s| : |%4s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.4s| : |%.4s|\n", "bonjour");
	res2 = printf("test |.4s| : |%.4s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-4s| : |%-4s|\n", "bonjour");
	res2 = printf("test |-4s| : |%-4s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.4s| : |%-.4s|\n", "bonjour");
	res2 = printf("test |-.4s| : |%-.4s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |04s| : |%04s|\n", "bonjour");
	res2 = printf("test |04s| : |%04s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-0.4s| : |%-0.4s|\n", "bonjour");
	res2 = printf("test |-0.4s| : |%-0.4s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |0.0s| : |%0.0s|\n", "bonjour");
	res2 = printf("test |0.0s| : |%0.0s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.0s| : |%.0s|\n", "bonjour");
	res2 = printf("test |.0s| : |%.0s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |8.8s| : |%8.8s|\n", "bonjour");
	res2 = printf("test |8.8s| : |%8.8s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |8.0s| : |%8.0s|\n", "bonjour");
	res2 = printf("test |8.0s| : |%8.0s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |4s| : |%4s|\n", "bonjour");
	res2 = printf("test |4s| : |%4s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.4s| : |%.4s|\n", "bonjour");
	res2 = printf("test |.4s| : |%.4s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-4s| : |%-4s|\n", "bonjour");
	res2 = printf("test |-4s| : |%-4s|\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.4s| : |%-.4s|\n", 0);
	res2 = printf("test |-.4s| : |%-.4s|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |04s| : |%04s|\n", 0);
	res2 = printf("test |04s| : |%04s|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-0.4s| : |%-0.4s|\n", 0);
	res2 = printf("test |-0.4s| : |%-0.4s|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |0.0s| : |%0.0s|\n", 0);
	res2 = printf("test |0.0s| : |%0.0s|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.0s| : |%.0s|\n", 0);
	res2 = printf("test |.0s| : |%.0s|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |8.8s| : |%8.8s|\n", 0);
	res2 = printf("test |8.8s| : |%8.8s|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |8.0s| : |%8.0s|\n", 0);
	res2 = printf("test |8.0s| : |%8.0s|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.-10s| : |%.-10s|\n", "bonjour!");
	res2 = printf("test |.-10s| : |%.-10s|\n", "bonjour!");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |8.0s| : |%.*s|\n", -10,"bonjour!");
	res2 = printf("test |8.0s| : |%.*s|\n",-10, "bonjour!");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test20(void)
{
	res1 = ft_printf("test 1 |0.0c|: |%0.0c|\n", 0);
	res2 = printf("test 1 |0.0c|: |%0.0c|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 1 |0c|: |%0c|\n", 0);
	res2 = printf("test 1 |0c|: |%0c|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 2 |.4c|: |%.4c|\n", 'a');
	res2 = printf("test 2 |.4c|: |%.4c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 3 |-4c|: |%-4c|\n", 'a');
	res2 = printf("test 3 |-4c|: |%-4c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("%--.4u et %0d%12c%1c\n", -12, 0, 0, 95);
	res2 = printf("%--.4u et %0d%12c%1c\n", -12, 0, 0, 95);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("%--.4u et %0d%-12c%1c\n", -12, 0, 0, 95);
	res2 = printf("%--.4u et %0d%-12c%1c\n", -12, 0, 0, 95);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 4 |-.4c|: |%-.4c|\n", 'a');
	res2 = printf("test 4 |-.4c|: |%-.4c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 5 |04c|: |%04c|\n", 'a');
	res2 = printf("test 5 |04c|: |%04c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 6 |-0.4c|: |%-0.4c|\n", 'a');
	res2 = printf("test 6 |-0.4c|: |%-0.4c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 7 |0.0c|: |%0.0c|\n", 'a');
	res2 = printf("test 7 |0.0c|: |%0.0c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 8 |.0c|: |%.0c|\n", 'a');
	res2 = printf("test 8 |.0c|: |%.0c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 9 |8.8c|: |%8.8c|\n", 'a');
	res2 = printf("test 9 |8.8c|: |%8.8c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 10 : |%8.0c|\n", 'a');
	res2 = printf("test 10 : |%8.0c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 1 |4%%|: |%4%|\n", 'a');
	res2 = printf("test 1 |4%%|: |%4%|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 2 |.4%%|: |%.4%|\n", 'a');
	res2 = printf("test 2 |.4%%|: |%.4%|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 3 |-4%%|: |%-4%|\n", 'a');
	res2 = printf("test 3 |-4%%|: |%-4%|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 4 |-.4%%|: |%-.4%|\n", 'a');
	res2 = printf("test 4 |-.4%%|: |%-.4%|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 5 |04%%|: |%04%|\n", 'a');
	res2 = printf("test 5 |04%%|: |%04%|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 6 |-0.4%%|: |%-0.4%|\n", 'a');
	res2 = printf("test 6 |-0.4%%|: |%-0.4%|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 7 |0.0%%|: |%0.0%|\n", 'a');
	res2 = printf("test 7 |0.0%%|: |%0.0%|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 8 |.0%%|: |%.0%|\n", 'a');
	res2 = printf("test 8 |.0%%|: |%.0%|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 9 |8.8%%|: |%8.8%|\n", 'a');
	res2 = printf("test 9 |8.8%%|: |%8.8%|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 10 : |%8.0%|\n", 'a');
	res2 = printf("test 10 : |%8.0%|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 10 : |%04.2%|\n", 'a');
	res2 = printf("test 10 : |%04.2%|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test21(void)
{
	int el = 4052;
	res1 = ft_printf("test 1 |*p| : |%*p|\n", 4, &el);
	res2 = printf("test 1 |*p| : |%*p|\n", 4, &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 2 |.4p| : |%.4p|\n", &el);
	res2 = printf("test 2 |.4p| : |%.4p|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 3 |-4p| : |%-4p|\n", &el);
	res2 = printf("test 3 |-4p| : |%-4p|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 3 |-20.20p| : |%-20.20p|\n", &el);
	res2 = printf("test 3 |-20.20p| : |%-20.20p|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 4 |-0.0p| : |%-0.0p|\n", &el);
	res2 = printf("test 4 |-0.0p| : |%-0.0p|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 4 |04p| : |%04p|\n", &el);
	res2 = printf("test 4 |04p| : |%04p|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 5 |020.20p| : |%020.20p|\n", &el);
	res2 = printf("test 5 |020.20p| : |%020.20p|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 6 |0.0p| : |%0.0p|\n", &el);
	res2 = printf("test 6 |0.0p| : |%0.0p|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 7 |.20p| : |%.20p|\n", &el);
	res2 = printf("test 7 |.20p| : |%.20p|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 8 |20.p| : |%20.p|\n", &el);
	res2 = printf("test 8 |20.p| : |%20.p|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 9 |20p| : |%20p|\n", &el);
	res2 = printf("test 9 |20p| : |%20p|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 9 |-16.p| : |%-16.p|\n", 0);
	res2 = printf("test 9 |-16.p| : |%-16.p|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 9 |-16.p| : |%-16.0p|\n", 0);
	res2 = printf("test 9 |-16.p| : |%-16.0p|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test22(void)
{
	int el = 4052;
	res1 = ft_printf("test 1 |*X| : |%*X|\n", 4, &el);
	res2 = printf("test 1 |*X| : |%*X|\n", 4, &el);
	printf("\nres2 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 2 |.4X| : |%.4X|\n", &el);
	res2 = printf("test 2 |.4X| : |%.4X|\n", &el);
	printf("\nres3 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 3 |-4X| : |%-4X|\n", &el);
	res2 = printf("test 3 |-4X| : |%-4X|\n", &el);
	printf("\nres3 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 4 |-20.20X| : |%-20.20X|\n", &el);
	res2 = printf("test 4 |-20.20X| : |%-20.20X|\n", &el);
	printf("\nres3 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 5 |-0.0X| : |%-0.0X|\n", &el);
	res2 = printf("test 5 |-0.0X| : |%-0.0X|\n", &el);
	printf("\nres2 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 6 |04X| : |%04X|\n", &el);
	res2 = printf("test 6 |04X| : |%04X|\n", &el);
	printf("\nres2 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 7 |020.20X| : |%020.20X|\n", &el);
	res2 = printf("test 7 |020.20X| : |%020.20X|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 8 |0.0X| : |%0.0X|\n", &el);
	res2 = printf("test 8 |0.0X| : |%0.0X|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 9 |.20X| : |%.20X|\n", &el);
	res2 = printf("test 9 |.20X| : |%.20X|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 10 |20.X| : |%20.X|\n", &el);
	res2 = printf("test 10 |20.X| : |%20.X|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 11 |8.8X| : |%8.8X|\n", &el);
	res2 = printf("test 11 |8.8X| : |%8.8X|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 12 |20X| : |%20X|\n", &el);
	res2 = printf("test 12 |20X| : |%20X|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test23(void)
{
	int el = 4052;
	res1 = ft_printf("test 1 |*x| : |%*x|\n", 4, &el);
	res2 = printf("test 1 |*x| : |%*x|\n", 4, &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 2 |.4x| : |%.4x|\n", &el);
	res2 = printf("test 2 |.4x| : |%.4x|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 3 |-4x| : |%-4x|\n", &el);
	res2 = printf("test 3 |-4x| : |%-4x|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 4 |-20.20x| : |%-20.20x|\n", &el);
	res2 = printf("test 4 |-20.20x| : |%-20.20x|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 5 |-0.0x| : |%-0.0x|\n", &el);
	res2 = printf("test 5 |-0.0x| : |%-0.0x|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 6 |04x| : |%04x|\n", &el);
	res2 = printf("test 6 |04x| : |%04x|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 7 |020.20x| : |%020.20x|\n", &el);
	res2 = printf("test 7 |020.20x| : |%020.20x|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 8 |0.0x| : |%0.0x|\n", &el);
	res2 = printf("test 8 |0.0x| : |%0.0x|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 9 |.20x| : |%.20x|\n", &el);
	res2 = printf("test 9 |.20x| : |%.20x|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 10 |20.x| : |%20.x|\n", &el);
	res2 = printf("test 10 |20.x| : |%20.x|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 11 |8.8x| : |%8.8x|\n", &el);
	res2 = printf("test 11 |8.8x| : |%8.8x|\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test24(void)
{
	res1 = ft_printf("test 1 |00d| : |%00d|\n",  4280);
	res2 = printf("test 1 |00d| : |%00d|\n",  4280);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 2 |--d| : |%--d|\n", 4280);
	res2 = printf("test 2 |--d| : |%--d|\n", 4280);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 3 |..d| : |%..d|\n",  4280);
	res2 = printf("test 3 |..d| : |%..d|\n",  4280);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 4 |**d| : |%**d|\n", 4, 5, 4280);
	res2 = printf("test 4 |**d| : |%**d|\n", 4, 5, 4280);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	
}

void	test25(void)
{
	res1 = ft_printf("test |+0d| : |%+0d|\n", 0);
	res2 = printf("test |+0d| : |%+0d|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+04d| : |%+04d|\n", 2144);
	res2 = printf("test |+04d| : |%+04d|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+06d| : |%+06d|\n", 2144);
	res2 = printf("test |+06d| : |%+06d|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+010d| : |%+010d|\n", 2144);
	res2 = printf("test |+010d| : |%+010d|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+0000010d| : |%+0000010d|\n", 2144);
	res2 = printf("test |+0000010d| : |%+0000010d|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+0d| : |%+0d|\n", -2144);
	res2 = printf("test |+0d| : |%+0d|\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+010u| : |%+010u|\n", 2144);
	res2 = printf("test |+010u| : |%+010u|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+0000010u| : |%+0000010u|\n", 2144);
	res2 = printf("test |+0000010u| : |%+0000010u|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+0u| : |%+0u|\n", -2144);
	res2 = printf("test |+0u| : |%+0u|\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+04d| : |%+04d|\n", -2144);
	res2 = printf("test |+04d| : |%+04d|\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+0000010c| : |%+0000010c|\n", 'a');
	res2 = printf("test |+0000010c| : |%+0000010c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+04s| : |%+04s|\n",  "hello");
	res2 = printf("test |+04s| : |%+04s|\n", "hello");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+06X| : |%+06X|\n", 2144);
	res2 = printf("test |+06X| : |%+06X|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+010x| : |%+010x|\n", 2144);
	res2 = printf("test |+010x| : |%+010x|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+-4.d| : |%+-4.d|\n", 0);
	res2 = printf("test |+-4.d| : |%+-4.d|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+-4.x| : |%+-4.x|\n", 0);
	res2 = printf("test |+-4.x| : |%+-4.x|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test26(void)
{
	res1 = ft_printf("test | 0d| : |% 0d|\n", 0);
	res2 = printf("test | 0d| : |% 0d|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test | 04d| : |% 04d|\n", 2144);
	res2 = printf("test | 04d| : |% 04d|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  06d| : |%  06d|\n", 2144);
	res2 = printf("test |  06d| : |%  06d|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  010d| : |%  010d|\n", 2144);
	res2 = printf("test |  010d| : |%  010d|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  0000010d| : |%  0000010d|\n", 2144);
	res2 = printf("test |  0000010d| : |%  0000010d|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  0d| : |%  0d|\n", -2144);
	res2 = printf("test |  0d| : |%  0d|\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  010u| : |%  010u|\n", 2144);
	res2 = printf("test |  010u| : |%  010u|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  0000010u| : |%  0000010u|\n", 2144);
	res2 = printf("test |  0000010u| : |%  0000010u|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  0u| : |%  0u|\n", -2144);
	res2 = printf("test |  0u| : |%  0u|\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  04d| : |%  04d|\n", -2144);
	res2 = printf("test |  04d| : |%  04d|\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  0000010c| : |%  0000010c|\n", 'a');
	res2 = printf("test |  0000010c| : |%  0000010c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  04s| : |%  04s|\n",  "hello");
	res2 = printf("test |  04s| : |%  04s|\n", "hello");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  06X| : |%  06X|\n", 2144);
	res2 = printf("test |  06X| : |%  06X|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  010x| : |%  010x|\n", 2144);
	res2 = printf("test |  010x| : |%  010x|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |  010.0d| : |%  010.0d|\n", 0);
	res2 = printf("test |  010.0d| : |%  010.0d|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test | .d| : |% .d|\n", 0);
	res2 = printf("test | .d| : |% .d|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test27(void)
{
	res1 = ft_printf("test |#0d| : |%#0d|\n", 2144);
	res2 = printf("test |#0d| : |%#0d|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |#010d| : |%#010d|\n", 2144);
	res2 = printf("test |#010d| : |%#010d|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |#04d| : |%#04d|\n", -2144);
	res2 = printf("test |#04d| : |%#04d|\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |#0000010c| : |%#0000010c|\n", 'a');
	res2 = printf("test |#0000010c| : |%#0000010c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |#04s| : |%#04s|\n",  "hello");
	res2 = printf("test |#04s| : |%#04s|\n", "hello");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |#06X| : |%#06X|\n", 2144);
	res2 = printf("test |#06X| : |%#06X|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |#010x| : |%#010x|\n", 2144);
	res2 = printf("test |#010x| : |%#010x|\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |#06X| : |%#06X|\n", 0);
	res2 = printf("test |#06X| : |%#06X|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |#010x| : |%#010x|\n", 0);
	res2 = printf("test |#010x| : |%#010x|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |#-4.3d| : |%4.3d|\n", 0);
	res2 = printf("test |#-4.3d| : |%4.3d|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |#-4.0d| : |%4.0d|\n", 0);
	res2 = printf("test |#-4.0d| : |%4.0d|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}


void	test28(void)
{
	res1 = ft_printf("test |+0f| : |%+0f|\n", 0);
	res2 = printf("test |+0f| : |%+0f|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+04f| : |%+04f|\n", 21.21579999);
	res2 = printf("test |+04f| : |%+04f|\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+06f| : |%+06f|\n", 21.21579999);
	res2 = printf("test |+06f| : |%+06f|\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+010f| : |%+010f|\n", 21.21579999);
	res2 = printf("test |+010f| : |%+010f|\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+0000010f| : |%+0000010f|\n", 21.21579999);
	res2 = printf("test |+0000010f| : |%+0000010f|\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |0f| : |%0f|\n", -21.21579999);
	res2 = printf("test |0f| : |%0f|\n", -21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |010f| : |%010f|\n", 21.21579999);
	res2 = printf("test |010f| : |%010f|\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+0000010f| : |%+0000010f|\n", 21.21579999);
	res2 = printf("test |+0000010f| : |%+0000010f|\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+0f| : |%+0f|\n", -21.21579999);
	res2 = printf("test |+0f| : |%+0f|\n", -21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+04f| : |%+04f|\n", -21.21579999);
	res2 = printf("test |+04f| : |%+04f|\n", -21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+06f| : |%+06f|\n", 21.21579999);
	res2 = printf("test |+06f| : |%+06f|\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+010f| : |%+010f|\n", 21.21579999);
	res2 = printf("test |+010f| : |%+010f|\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = printf("test |.0f| : |%.0f|\n", -21.23456);
	res2 = printf("test |.0f| : |%.0f|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.4f| : |%.4f|\n", -21.23456);
	res2 = printf("test |.4f| : |%.4f|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.4f| : |%.4f|\n", -21.23453);
	res2 = printf("test |.4f| : |%.4f|\n", -21.23453);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.4f| : |%.4f|\n", -21.23455);
	res2 = printf("test |.4f| : |%.4f|\n", -21.23455);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.4f| : |%.4f|\n", -99.99999);
	res2 = printf("test |.4f| : |%.4f|\n", -99.99999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.6f| : |%.6f|\n", -21.23456);
	res2 = printf("test |.6f| : |%.6f|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.08f| : |%.08f|\n", -21.23456);
	res2 = printf("test |.08f| : |%.08f|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.0f| : |%-.0f|\n", -21.23456);
	res2 = printf("test |-.0f| : |%-.0f|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.4f| : |%-.4f|\n", -21.23456);
	res2 = printf("test |-.4f| : |%-.4f|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.15f| : |%-.15f|\n", -21.23456);
	res2 = printf("test |-.15f| : |%-.15f|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.8f| : |%-.8f|\n", -21.23456);
	res2 = printf("test |-.8f| : |%-.8f|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-20.8f| : |%-20.8f|\n", -21.23456);
	res2 = printf("test |-20.8f| : |%-20.8f|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-4.*f| : |%-4.*f|\n", -2, -21.23456);
	res2 = printf("test |-4.*f| : |%-4.*f|\n", -2, -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test29(void)
{
	res1 = ft_printf("test |+0e| : |%+0e|\n", 0);
	res2 = printf("test |+0e| : |%+0e|\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+04e| : |%+04e|\n", 21.21579);
	res2 = printf("test |+04e| : |%+04e|\n", 21.21579);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+06e| : |%+06e|\n", 21.21579);
	res2 = printf("test |+06e| : |%+06e|\n", 21.21579);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+010e| : |%+010e|\n", 21.21579);
	res2 = printf("test |+010e| : |%+010e|\n", 21.21579);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+0000010e| : |%+0000010e|\n", 21.215799);
	res2 = printf("test |+0000010e| : |%+0000010e|\n", 21.215799);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |0e| : |%0e|\n", -21.215799);
	res2 = printf("test |0e| : |%0e|\n", -21.215799);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |010e| : |%010e|\n", 21.21579999);
	res2 = printf("test |010e| : |%010e|\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+0000010e| : |%+0000010e|\n", 21.21579999);
	res2 = printf("test |+0000010e| : |%+0000010e|\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+0e| : |%+0e|\n", -21.21579999);
	res2 = printf("test |+0e| : |%+0e|\n", -21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+04e| : |%+04e|\n", -21.21579999);
	res2 = printf("test |+04e| : |%+04e|\n", -21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+06e| : |%+06e|\n", 21.21579999);
	res2 = printf("test |+06e| : |%+06e|\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |+010e| : |%+010e|\n", 21.21579999);
	res2 = printf("test |+010e| : |%+010e|\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = printf("test |.0e| : |%.0e|\n", -21.23456);
	res2 = printf("test |.0e| : |%.0e|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.4e| : |%.4e|\n", -21.23456);
	res2 = printf("test |.4e| : |%.4e|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.4e| : |%.4e|\n", -21.23453);
	res2 = printf("test |.4e| : |%.4e|\n", -21.23453);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.4e| : |%.4e|\n", -21.23455);
	res2 = printf("test |.4e| : |%.4e|\n", -21.23455);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.3e| : |%.3e|\n", -21.23455);
	res2 = printf("test |.3e| : |%.3e|\n", -21.23455);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.2e| : |%.2e|\n", -21.23455);
	res2 = printf("test |.2e| : |%.2e|\n", -21.23455);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.4e| : |%.4e|\n", -99.99999);
	res2 = printf("test |.4e| : |%.4e|\n", -99.99999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.6e| : |%.6e|\n", -21.23456);
	res2 = printf("test |.6e| : |%.6e|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.08e| : |%.08e|\n", -21.23456);
	res2 = printf("test |.08e| : |%.08e|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.0e| : |%-.0e|\n", -21.23456);
	res2 = printf("test |-.0e| : |%-.0e|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.4e| : |%-.4e|\n", -21.23456);
	res2 = printf("test |-.4e| : |%-.4e|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.15e| : |%-.15e|\n", -21.23456);
	res2 = printf("test |-.15e| : |%-.15e|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-.8e| : |%-.8e|\n", -21.23456);
	res2 = printf("test |-.8e| : |%-.8e|\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |-20.8e| : |%-20.8e|\n", -212345611,11);
	res2 = printf("test |-20.8e| : |%-20.8e|\n", -212345611,11);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void test30(void)
{
	int i = 21;
	res1 = ft_printf("\ntest 1 |li| : |%li|\n", -2422);
	res2 = printf("\ntest 1 |li| : |%li|\n", -2422);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 2 |lc| : |%lc|\n", 233);
	res2 = printf("\ntest 2 |lc| : |%lc|\n", 233);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 3 |ls| : |%ls|\n", "bonjour!");
	res2 = printf("\ntest 3 |ls| : |%ls|\n", "bonjour!");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 4 |lu| : |%lu|\n", 25255);
	res2 = printf("\ntest 4 |lu| : |%lu|\n", 25255);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 5 |lx| : |%lx|\n", 25255);
	res2 = printf("\ntest 5 |lx| : |%lx|\n", 25255);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 6 |lX| : |%lX|\n", 25255);
	res2 = printf("\ntest 6 |lX| : |%lX|\n", 25255);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 7 |l%%| : |%l%|\n");
	res2 = printf("\ntest 7 |l%%| : |%l%|\n");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 8 |lf| : |%lf|\n", 22.2422);
	res2 = printf("\ntest 8 |lf| : |%lf|\n", 22.2422);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 9 |le| : |%le|\n", 22.2422);
	res2 = printf("\ntest 9 |le| : |%le|\n", 22.2422);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 10 |lp| : |%lp|\n", i);
	res2 = printf("\ntest 10 |lp| : |%lp|\n", i);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void test31(void)
{
	int i = 21;
	res1 = ft_printf("\ntest 1 |lli| : |%lli|\n", -2422);
	res2 = printf("\ntest 1 |lli| : |%lli|\n", -2422);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |lli| : |% lli|\n", 9223372036854775807);
	res2 = printf("\ntest 1 |lli| : |% lli|\n", 9223372036854775807);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |lli| : |% lli|\n", -9223372036854775808);
	res2 = printf("\ntest 1 |lli| : |% lli|\n", -9223372036854775808);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |lli| : |% lli|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |lli| : |% lli|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |lli| : |%.4lli|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |lli| : |%.4lli|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |lli| : |%-4.lli|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |lli| : |%-4.lli|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |lli| : |%.*lli|\n",-4, 18446744073709551615);
	res2 = printf("\ntest 1 |lli| : |%.*lli|\n",-4, 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |lli| : |%-4.4lli|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |lli| : |%-4.4lli|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |llu| : |%.4llu|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |llu| : |%.4llu|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |llu| : |%-4.llu|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |llu| : |%-4.llu|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |llu| : |%.*llu|\n",-4, 18446744073709551615);
	res2 = printf("\ntest 1 |llu| : |%.*llu|\n",-4, 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |llu| : |%-4.4llu|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |llu| : |%-4.4llu|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |llx| : |%.4llx|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |llx| : |%.4llx|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |llx| : |%-4.llx|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |llx| : |%-4.llx|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |llx| : |%.*llx|\n",-4, 18446744073709551615);
	res2 = printf("\ntest 1 |llx| : |%.*llx|\n",-4, 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |llx| : |%-4.4llx|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |llx| : |%-4.4llx|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |u| : |%.4u|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |u| : |%.4u|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |u| : |%-4.u|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |u| : |%-4.u|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |u| : |%.*u|\n",-4, 18446744073709551615);
	res2 = printf("\ntest 1 |u| : |%.*u|\n",-4, 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |u| : |%-4.4u|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |u| : |%-4.4u|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |x| : |%.4x|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |x| : |%.4x|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |x| : |%-4.x|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |x| : |%-4.x|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |x| : |%.*x|\n",-4, 18446744073709551615);
	res2 = printf("\ntest 1 |x| : |%.*x|\n",-4, 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 1 |x| : |%-4.4x|\n", 18446744073709551615);
	res2 = printf("\ntest 1 |x| : |%-4.4x|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);

	res1 = ft_printf("\ntest 2 |llc| : |%llc|\n", 233);
	res2 = printf("\ntest 2 |llc| : |%llc|\n", 233);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 3 |lls| : |%lls|\n", "bonjour!");
	res2 = printf("\ntest 3 |lls| : |%lls|\n", "bonjour!");
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 4 |llu| : |%llu|\n", 18446744073709551615);
	res2 = printf("\ntest 4 |llu| : |%llu|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 5 |llx| : |%llx|\n", 18446744073709551615);
	res2 = printf("\ntest 5 |llx| : |%llx|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 6 |llX| : |%llX|\n", 18446744073709551615);
	res2 = printf("\ntest 6 |llX| : |%llX|\n", 18446744073709551615);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 7 |ll%%| : |%ll%|\n");
	res2 = printf("\ntest 7 |ll%%| : |%ll%|\n");
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 8 |llf| : |%llf|\n", 22.2422);
	res2 = printf("\ntest 8 |llf| : |%llf|\n", 22.2422);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 9 |lle| : |%lle|\n", 22.2422);
	res2 = printf("\ntest 9 |lle| : |%lle|\n", 22.2422);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("\ntest 10 |llp| : |%llp|\n", i);
	res2 = printf("\ntest 10 |llp| : |%llp|\n", i);
printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

int main(int ac, char **av)
{
	if (ac == 1 || atoi(av[1]) == 1 )
	{
		printf("test1, string simple :\n");
		test1();
		printf("\n\n------------\n\n");
	

 }

	if (ac == 1 || atoi(av[1]) == 2 )
	{
		printf("test2, argument string :\n");
		test2();
		printf("\n\n------------\n\n");
	

 }

	if (ac == 1 || atoi(av[1]) == 3 )
	{
		printf("test3, argument int d :\n");
		test3();
		printf("\n\n------------\n\n");
		
	 }

	if (ac == 1 || atoi(av[1]) == 4 )
	{
		printf("test4, argument char :\n");
		test4();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 5 )
	{
		printf("test5, argument int i :\n");
		test5();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 6 )
	{
		printf("test6, argument unsigned int :\n");
		test6();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 7 )
	{
		printf("test7, argument address :\n");
		test7();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 8 )
	{
		printf("test8, argument x :\n");
		test8();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 9 )
	{
		printf("test9, argument X :\n");
		test9();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 10 )
	{
		printf("test10, argument %% :\n");
		test10();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 11 )
	{
		printf("test11, all arguments type :\n");
		test11();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 12 )
	{
		printf("test12, flag - :\n");
		test12();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 13 )
	{
		printf("test13, flag 0 :\n");
		test13();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 14 )
	{
		printf("test14, flag . :\n");
		test14();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 15 )
	{
		printf("test15, flag * :\n");
		test15();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 16 )
	{
		printf("test16, flags 0-*. with unsigned int :\n");
		test16();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 17 )
	{
		printf("test17, flag 0 :\n");
		test17();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 18 )
	{
		printf("test18, flags random :\n");
		test18();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 19 )
	{
		printf("test19, flags string :\n");
		test19();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 20 )
	{
		printf("test20, flags char :\n");
		test20();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 21 )
	{
		printf("test21, flags address :\n");
		test21();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 22 )
	{
		printf("test22, flags X :\n");
		test22();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 23 )
	{
		printf("test23, flags x :\n");
		test23();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 24 )
	{
		printf("test24, multiflags --, 00, .. :\n");
		test24();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 25 )
	{
		printf("test25, + flag :\n");
		test25();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 26 )
	{
		printf("test26, ' ' flag :\n");
		test26();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 27 )
	{
		printf("test27, # flag :\n");
		test27();
		printf("\n\n------------\n\n");
	
 }

	if (ac == 1 || atoi(av[1]) == 28 )
	{
		printf("test28, float type :\n");
		test28();
		printf("\n\n------------\n\n");
	}

	if (ac == 1 || atoi(av[1]) == 29 )
	{
		printf("test29,  type e :\n");
		test29();
		printf("\n\n------------\n\n");
	}

	if (ac == 1 || atoi(av[1]) == 30 )
	{
		printf("test30,  flag l :\n");
		test30();
		printf("\n\n------------\n\n");
	}

	if (ac == 1 || atoi(av[1]) == 31 )
	{
		printf("test31,  flag ll :\n");
		test31();
		printf("\n\n------------\n\n");
		while (1);
	}

	

	
}