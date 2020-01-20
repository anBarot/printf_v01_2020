/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:16:04 by abarot            #+#    #+#             */
/*   Updated: 2020/01/20 12:32:40 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

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
	res1 = ft_printf("test |-0d| :  %-0d  aaa\n", 2144);
	res2 = printf("test |-0d| :  %-0d  aaa\n", 2144);
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
}

void	test16(void)
{
	res1 = ft_printf("test |*u|: %*u\n", 0, -2144);
	res2 = printf("test |*u|: %*u\n", 0, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |*u|: %*u\n", 4, -2144);
	res2 = printf("test |*u|: %*u\n", 4, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |*d|: %*d\n", 6, -2144);
	res2 = printf("test |*d|: %*d\n", 6, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |*d|: %*d\n", 8, -2144);
	res2 = printf("test |*d|: %*d\n", 8, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*d|: %.*d\n", 0, -2144);
	res2 = printf("test |.*d|: %.*d\n", 0, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*d|: %.*d\n", 4, -2144);
	res2 = printf("test |.*d|: %.*d\n", 4, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*d|: %.*d\n", 6, -2144);
	res2 = printf("test |.*d|: %.*d\n", 6, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |.*d|: %.*d\n", 8, -2144);
	res2 = printf("test |.*d|: %.*d\n", 8, -2144);
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
	res2 = printf("test |.-**.d| : |%.-**.d|\n", 10, 10, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |d| : |%d|\n", 1,2,3, 4, 2144);
	res2 = printf("test |d| : |%d|\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |**d| : |%**d|\n", 1,2,3, 4, 2144);
	res2 = printf("test |**d| : |%**d|\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test |***.*d| : |%***.*d|\n", 1,2,3, 4, 2144);
	res2 = printf("test |***.*d| : |%***.*d|\n", 1,2,3, 4, 2144);
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
}

void	test20(void)
{
	res1 = ft_printf("test 1 |4c|: |%4c|\n", 'a');
	res2 = printf("test 1 |4c|: |%4c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 2 |.4c|: |%.4c|\n", 'a');
	res2 = printf("test 2 |.4c|: |%.4c|\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 3 |-4c|: |%-4c|\n", 'a');
	res2 = printf("test 3 |-4c|: |%-4c|\n", 'a');
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
	res1 = ft_printf("test 9 |8.8pp| : |%8.8p|\n", &el);
	res2 = printf("test 9 |8.8pp| : |%8.8p|\n", &el);
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
}


void	test28(void)
{
	res1 = ft_printf("test 0 0 int : %+0f\n", 0);
	res2 = printf("test 0 0 int : %+0f\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 4 0 int : %+04f\n", 21.21579999);
	res2 = printf("test 4 0 int : %+04f\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 6 0 int : %+06f\n", 21.21579999);
	res2 = printf("test 6 0 int : %+06f\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 10 0 int : %+010f\n", 21.21579999);
	res2 = printf("test 10 0 int : %+010f\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 20 0 int : %+0000010f\n", 21.21579999);
	res2 = printf("test 20 0 int : %+0000010f\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 0 0 int : %0f\n", -21.21579999);
	res2 = printf("test 0 0 int : %0f\n", -21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 10 0 int : %010f\n", 21.21579999);
	res2 = printf("test 10 0 int : %010f\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 20 0 int : %+0000010f\n", 21.21579999);
	res2 = printf("test 20 0 int : %+0000010f\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 0 0 int : %+0f\n", -21.21579999);
	res2 = printf("test 0 0 int : %+0f\n", -21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 4 0 int : %+04f\n", -21.21579999);
	res2 = printf("test 4 0 int : %+04f\n", -21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 6 0 int : %+06f\n", 21.21579999);
	res2 = printf("test 6 0 int : %+06f\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test 10 0 int : %+010f\n", 21.21579999);
	res2 = printf("test 10 0 int : %+010f\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = printf("test .0 int : %.0f aaa\n", -21.23456);
	res2 = printf("test .0 int : %.0f aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test .4 int : %.4f aaa\n", -21.23456);
	res2 = printf("test .4 int : %.4f aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test .4 int : %.4f aaa\n", -21.23453);
	res2 = printf("test .4 int : %.4f aaa\n", -21.23453);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test .4 int : %.4f aaa\n", -21.23455);
	res2 = printf("test .4 int : %.4f aaa\n", -21.23455);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test .4 int : %.4f aaa\n", -99.99999);
	res2 = printf("test .4 int : %.4f aaa\n", -99.99999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test .6 * int : %.6f aaa\n", -21.23456);
	res2 = printf("test .6 * int : %.6f aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test .8 * int : %.08f aaa\n", -21.23456);
	res2 = printf("test .8 * int : %.8f aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test -.0 int : %-.0f aaa\n", -21.23456);
	res2 = printf("test -.0 int : %-.0f aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test -.4 int : %-.4f aaa\n", -21.23456);
	res2 = printf("test -.4 int : %-.4f aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test -.6 * int : %-.15f aaa\n", -21.23456);
	res2 = printf("test -.6 * int : %-.15f aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test -.8 * int : %-.8f aaa\n", -21.23456);
	res2 = printf("test -.8 * int : %-.8f aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	res1 = ft_printf("test -.8 * int : %-20.8f aaa\n", -21.23456);
	res2 = printf("test -.8 * int : %-20.8f aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

void	test29(void)
{
	//res1 = ft_printf("test 0 0 int : %+0e\n", 0);
	res2 = printf("test 0 0 int : %+0e\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test 4 0 int : %+04e\n", 21.21579999);
	res2 = printf("test 4 0 int : %+04e\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test 6 0 int : %+06e\n", 21.21579999);
	res2 = printf("test 6 0 int : %+06e\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test 10 0 int : %+010e\n", 21.21579999);
	res2 = printf("test 10 0 int : %+010e\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test 20 0 int : %+0000010e\n", 21.21579999);
	res2 = printf("test 20 0 int : %+0000010e\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test 0 0 int : %0e\n", -21.21579999);
	res2 = printf("test 0 0 int : %0e\n", -21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test 10 0 int : %010e\n", 21.21579999);
	res2 = printf("test 10 0 int : %010e\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test 20 0 int : %+0000010e\n", 21.21579999);
	res2 = printf("test 20 0 int : %+0000010e\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test 0 0 int : %+0e\n", -21.21579999);
	res2 = printf("test 0 0 int : %+0e\n", -21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test 4 0 int : %+04e\n", -21.21579999);
	res2 = printf("test 4 0 int : %+04e\n", -21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test 6 0 int : %+06e\n", 21.21579999);
	res2 = printf("test 6 0 int : %+06e\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test 10 0 int : %+010e\n", 21.21579999);
	res2 = printf("test 10 0 int : %+010e\n", 21.21579999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = printf("test .0 int : %.0e aaa\n", -21.23456);
	res2 = printf("test .0 int : %.0e aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test .4 int : %.4e aaa\n", -21.23456);
	res2 = printf("test .4 int : %.4e aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test .4 int : %.4e aaa\n", -21.23453);
	res2 = printf("test .4 int : %.4e aaa\n", -21.23453);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test .4 int : %.4e aaa\n", -21.23455);
	res2 = printf("test .4 int : %.4e aaa\n", -21.23455);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test .4 int : %.4e aaa\n", -99.99999);
	res2 = printf("test .4 int : %.4e aaa\n", -99.99999);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test .6 * int : %.6e aaa\n", -21.23456);
	res2 = printf("test .6 * int : %.6e aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test .8 * int : %.08e aaa\n", -21.23456);
	res2 = printf("test .8 * int : %.8e aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test -.0 int : %-.0e aaa\n", -21.23456);
	res2 = printf("test -.0 int : %-.0e aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test -.4 int : %-.4e aaa\n", -21.23456);
	res2 = printf("test -.4 int : %-.4e aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test -.6 * int : %-.15e aaa\n", -21.23456);
	res2 = printf("test -.6 * int : %-.15e aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test -.8 * int : %-.8e aaa\n", -21.23456);
	res2 = printf("test -.8 * int : %-.8e aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	//res1 = ft_printf("test -.8 * int : %-20.8e aaa\n", -21.23456);
	res2 = printf("test -.8 * int : %-20.8e aaa\n", -21.23456);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
}

int main(int ac, char **av)
{
	if (atoi(av[1]) == 1 || ac == 1)
	{
		printf("test1, string simple :\n");
		test1();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 2 || ac == 1)
	{
		printf("test2, argument string :\n");
		test2();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 3 || ac == 1)
	{
		printf("test3, argument int d :\n");
		test3();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 4 || ac == 1)
	{
		printf("test4, argument char :\n");
		test4();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 5 || ac == 1)
	{
		printf("test5, argument int i :\n");
		test5();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 6 || ac == 1)
	{
		printf("test6, argument unsigned int :\n");
		test6();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 7 || ac == 1)
	{
		printf("test7, argument address :\n");
		test7();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 8 || ac == 1)
	{
		printf("test8, argument x :\n");
		test8();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 9 || ac == 1)
	{
		printf("test9, argument X :\n");
		test9();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 10 || ac == 1)
	{
		printf("test10, argument %% :\n");
		test10();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 11 || ac == 1)
	{
		printf("test11, all arguments type :\n");
		test11();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 12 || ac == 1)
	{
		printf("test12, flag - :\n");
		test12();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 13 || ac == 1)
	{
		printf("test13, flag 0 :\n");
		test13();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 14 || ac == 1)
	{
		printf("test14, flag . :\n");
		test14();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 15 || ac == 1)
	{
		printf("test15, flag * :\n");
		test15();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 16 || ac == 1)
	{
		printf("test16, flags 0-*. with unsigned int :\n");
		test16();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 17 || ac == 1)
	{
		printf("test17, flag 0 :\n");
		test17();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 18 || ac == 1)
	{
		printf("test18, flags random :\n");
		test18();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 19 || ac == 1)
	{
		printf("test19, flags string :\n");
		test19();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 20 || ac == 1)
	{
		printf("test20, flags char :\n");
		test20();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 21 || ac == 1)
	{
		printf("test21, flags address :\n");
		test21();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 22 || ac == 1)
	{
		printf("test22, flags X :\n");
		test22();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 23 || ac == 1)
	{
		printf("test23, flags x :\n");
		test23();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 24 || ac == 1)
	{
		printf("test24, multiflags --, 00, .. :\n");
		test24();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 25 || ac == 1)
	{
		printf("test25, + flag :\n");
		test25();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 26 || ac == 1)
	{
		printf("test26, ' ' flag :\n");
		test26();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 27 || ac == 1)
	{
		printf("test27, # flag :\n");
		test27();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 28 || ac == 1)
	{
		printf("test28, float type :\n");
		test28();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 29 || ac == 1)
	{
		printf("test29,  type :\n");
		test29();
		printf("\n\n------------\n\n");
	}

	if (atoi(av[1]) == 30 || ac == 1)
	{}

	if (atoi(av[1]) == 31 || ac == 1)
	{}
	
}