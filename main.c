/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:16:04 by abarot            #+#    #+#             */
/*   Updated: 2019/12/03 13:38:48 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int res1 = 0;
int res2 = 0;

void	test1(void)
{
	res1 = ft_printf(MAGENTA "test without arg\n");
	res2 = printf(BLUE "test without arg\n");
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test very long without arggggggggggggggggggggggggggggggg\n"  );
	res2 = printf(BLUE "test very long without arggggggggggggggggggggggggggggggg\n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "" );
	res2 = printf(BLUE "" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test if '\0'" );
	res2 = printf(BLUE "test if '\0'" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "" );
	res2 = printf(BLUE "" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "\t\n\r\v\f\n"  );
	res2 = printf(BLUE "\t\n\r\v\f\n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "\n", 25, 0);
	res2 = printf(BLUE "\n", 25, 0);
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "%");
	res2 = printf(BLUE "%");
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "%5");
	res2 = printf(BLUE "%5");
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "%-5");
	res2 = printf(BLUE "%-5");
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "%05");
	res2 = printf(BLUE "%05");
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test2(void)
{
	char *test = "hey! it'sa test!\n";
	res1 = ft_printf(MAGENTA "test 1 : %s\n" , "abcde" );
	res2 = printf(BLUE "test 1 : %s\n" , "abcde" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %s\n" , "123456789" );
	res2 = printf(BLUE "test 2 : %s\n" , "123456789" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %s %s\n" , "123456789", "abcde" );
	res2 = printf(BLUE "test 3 : %s %s\n" , "123456789", "abcde" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %s\n" , 0 );
	res2 = printf(BLUE "test 4 : %s\n" , 0 );
		if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %s\n" , "" );
	res2 = printf(BLUE "test 5 : %s\n" , "" );
		if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %s\n" , test );
	res2 = printf(BLUE "test 6 : %s\n" , test );
		if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %s\n" , "\0" );
	res2 = printf(BLUE "test 6 : %s\n" , "\0" );
		if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test3(void)
{
	res1 = ft_printf(MAGENTA "test 1 : %d\n" , -2147483648 );
	res2 = printf(BLUE "test 1 : %d\n" , -2147483648 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %d\n" , 2147483647 );
	res2 = printf(BLUE "test 2 : %d\n" , 2147483647 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %d\n" , 21474836479 );
	res2 = printf(BLUE "test 3 : %d\n" , 21474836479 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %d\n" , -2147483649 );
	res2 = printf(BLUE "test 3 : %d\n" , -2147483649 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %d\n" , 0 );
	res2 = printf(BLUE "test 4 : %d\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %d\n" , 1 );
	res2 = printf(BLUE "test 4 : %d\n" , 1 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test4()
{
    res1 = ft_printf(MAGENTA "test 1 : %c\n" , 'a' );
    res2 = printf(BLUE "test 1 : %c\n" , 'a' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %c\n" , 97 );
	res2 = printf(BLUE "test 2 : %c\n" , 97 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %c %c\n" , 97, 48 );
	res2 = printf(BLUE "test 3 : %c %c\n" , 97, 48 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : |%c|\n" , 0 );
	res2 = printf(BLUE "test 4 : |%c|\n" , 0 );
		if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : |%c|\n" , '\0' );
	res2 = printf(BLUE "test 5 : |%c|\n" , '\0' );
		if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : |%c|\n");
	res2 = printf(BLUE "test 5 : |%c|\n");
		if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test5()
{
    res1 = ft_printf(MAGENTA "test 1 : %i\n" , -2147483648 );
	res2 = printf(BLUE "test 1 : %i\n" , -2147483648 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %i\n" , 2147483647 );
	res2 = printf(BLUE "test 2 : %i\n" , 2147483647 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %i\n" , 214748364799 );
	res2 = printf(BLUE "test 3 : %i\n" , 214748364799 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %i\n" , 0 );
	res2 = printf(BLUE "test 4 : %i\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %i\n" , 1 );
	res2 = printf(BLUE "test 4 : %i\n" , 1 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test6()
{
    res1 = ft_printf(MAGENTA "test 1 : %u\n" , -4294967295 );
	res2 = printf(BLUE "test 1 : %u\n" , -4294967295 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %u\n" , 4294967295 );
	res2 = printf(BLUE "test 2 : %u\n" , 4294967295 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %u\n" , 214748364799 );
	res2 = printf(BLUE "test 3 : %u\n" , 214748364799 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %u\n" , 0 );
	res2 = printf(BLUE "test 4 : %u\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test7()
{
    int     el1 = 58;
    char    *el2 = "0123456879";
    char    el3 = 'a';
    char    el4 = 97;
    res1 = ft_printf(MAGENTA "test 1 : %p\n" , &el1 );
    res2 = printf(BLUE "test 1 : %p\n" , &el1 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %p\n" , &el2 );
    res2 = printf(BLUE "test 2 : %p\n" , &el2 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %p\n" , &el3 );
	res2 = printf(BLUE "test 3 : %p\n" , &el3 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %p\n" , &el4 );
	res2 = printf(BLUE "test 4 : %p\n" , &el4 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %p\n" , 0 );
	res2 = printf(BLUE "test 5 : %p\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %p\n" , '\0' );
	res2 = printf(BLUE "test 6 : %p\n" , '\0' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %p\n" , "123");
	res2 = printf(BLUE "test 6 : %p\n" , "123" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test8()
{
    int     el1 = 58;
    char    *el2 = "0123456879";
    char    el3 = 'a';
    char    el4 = 97;
    res1 = ft_printf(MAGENTA "test 1 : %x\n" , el1 );
    res2 = printf(BLUE "test 1 : %x\n" , el1 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %x\n" , &el2 );
    res2 = printf(BLUE "test 2 : %x\n" , &el2 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %x\n" , &el3 );
	res2 = printf(BLUE "test 3 : %x\n" , &el3 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %x\n" , &el4 );
	res2 = printf(BLUE "test 4 : %x\n" , &el4 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %x\n" , 0 );
	res2 = printf(BLUE "test 5 : %x\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %x\n" , '\0' );
	res2 = printf(BLUE "test 6 : %x\n" , '\0' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test9()
{
    int     el1 = 58;
    char    *el2 = "0123456879";
    char    el3 = 'a';
    char    el4 = 97;
    res1 = ft_printf(MAGENTA "test 1 : %X\n" , &el1 );
    res2 = printf(BLUE "test 1 : %X\n" , &el1 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %X\n" , &el2 );
    res2 = printf(BLUE "test 2 : %X\n" , &el2 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %X\n" , &el3 );
	res2 = printf(BLUE "test 3 : %X\n" , &el3 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %X\n" , &el4 );
	res2 = printf(BLUE "test 4 : %X\n" , &el4 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %X\n" , 0 );
	res2 = printf(BLUE "test 5 : %X\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %X\n" , '\0' );
	res2 = printf(BLUE "test 6 : %X\n" , '\0' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test10(void)
{
	res1 = ft_printf(MAGENTA "test 1 : %%\n"  );
	res2 = printf(BLUE "test 1 : %%\n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : [%%]\n"  );
	res2 = printf(BLUE "test 2 : [%%]\n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %%%% \n"  );
	res2 = printf(BLUE "test 3 : %%%% \n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test11(void)
{
	char el1 = '1';
	char *p_el1 = &el1;
	res1 = ft_printf(MAGENTA "test %d %i %s %c %u %x %X %p %%\n" , 
				-2147483648, -2147483648, "abcde", 'a', 4294967295, p_el1, p_el1, p_el1 );
	res2 = printf(BLUE "test %d %i %s %c %u %x %X %p %%\n" , 
				-2147483648, -2147483648, "abcde", 'a', 4294967295, p_el1, p_el1, p_el1 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test %d %i %s %c %u %x %X %p %%\n" , 0, 0, 0, 0, 0, 0, 0, 0 );
	res2 = printf(BLUE "test %d %i %s %c %u %x %X %p %%\n" , 0, 0, 0, 0, 0, 0, 0, 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test12(void)
{
	res1 = ft_printf(MAGENTA "test 1 : %-0d aaa\n" , 2144 );
	res2 = printf(BLUE "test 1 : %-0d aaa\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %-04d aaa\n" , 2144 );
	res2 = printf(BLUE "test 2 : %-04d aaa\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %-06d aaa\n" , 2144 );
	res2 = printf(BLUE "test 3 : %-06d aaa\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %-010d aaa\n" , 2144 );
	res2 = printf(BLUE "test 4 : %-010d aaa\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %-0000010d aaa\n" , 2144 );
	res2 = printf(BLUE "test 5 : %-0000010d aaa\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %-0d aaa\n" , -2144 );
	res2 = printf(BLUE "test 6 : %-0d aaa\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : %-04d aaa\n" , -2144 );
	res2 = printf(BLUE "test 7 : %-04d aaa\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : %-06d aaa\n" , -2144 );
	res2 = printf(BLUE "test 8 : %-06d aaa\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 9 : %-010d aaa\n" , -2144 );
	res2 = printf(BLUE "test 9 : %-010d aaa\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 10 : %-0000010d aaa\n" , -2144 );
	res2 = printf(BLUE "test 10 : %-0000010d aaa\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test13(void)
{
	res1 = ft_printf(MAGENTA "test 1 : %0d\n" , 2144 );
	res2 = printf(BLUE "test 1 : %0d\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %04d\n" , 2144 );
	res2 = printf(BLUE "test 2 : %04d\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %06d\n" , 2144 );
	res2 = printf(BLUE "test 3 : %06d\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %010d\n" , 2144 );
	res2 = printf(BLUE "test 4 : %010d\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %0000010d\n" , 2144 );
	res2 = printf(BLUE "test 5 : %0000010d\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %0d\n" , -2144 );
	res2 = printf(BLUE "test 6 : %0d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : %04d\n" , -2144 );
	res2 = printf(BLUE "test 7 : %04d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : %06d\n" , -2144 );
	res2 = printf(BLUE "test 8 : %06d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 9 : %010d\n" , -2144 );
	res2 = printf(BLUE "test 9 : %010d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 10 : %0000010d\n" , -2144 );
	res2 = printf(BLUE "test 10 : %0000010d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test14(void)
{
	res1 = ft_printf(MAGENTA "test 1 : %.0d\n" , -2144 );
	res2 = printf(BLUE "test 1 : %.0d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %.2d\n" , -2144 );
	res2 = printf(BLUE "test 2 : %.2d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %.4d\n" , -2144 );
	res2 = printf(BLUE "test 3 : %.4d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %.6d\n" , -2144 );
	res2 = printf(BLUE "test 3 : %.6d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %.8d\n" , -2144 );
	res2 = printf(BLUE "test 4 : %.8d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %-.0d\n" , -2144 );
	res2 = printf(BLUE "test 5 : %-.0d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %-.4d\n" , -2144 );
	res2 = printf(BLUE "test 6 : %-.4d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : %-.6d\n" , -2144 );
	res2 = printf(BLUE "test 7 : %-.6d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : %-.8d\n" , -2144 );
	res2 = printf(BLUE "test 8 : %-.8d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 9 : %010.8d\n" , -21 );
	res2 = printf(BLUE "test 9 : %010.8d\n" , -21 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 10 : %010.2d\n" , -21 );
	res2 = printf(BLUE "test 10 : %010.2d\n" , -21 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 11 : %010.5d\n" , -21 );
	res2 = printf(BLUE "test 11 : %010.5d\n" , -21 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 12 : %010.0d\n" , 0 );
	res2 = printf(BLUE "test 12 : %010.0d\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 13 : %0.0d\n" , 21 );
	res2 = printf(BLUE "test 13 : %0.0d\n" , 21 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 13 : %0.0d\n" , 0 );
	res2 = printf(BLUE "test 13 : %0.0d\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");

}

void	test15(void)
{
	res1 = ft_printf(MAGENTA "test 1 : %*d\n" , 5, -2144 );
	res2 = printf(BLUE "test 1 : %*d\n" , 5, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %*d\n" , 4, -2144 );
	res2 = printf(BLUE "test 2 : %*d\n" , 4, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %*d\n" , 6, -2144 );
	res2 = printf(BLUE "test 3 : %*d\n" , 6, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %*d\n" , 8, -2144 );
	res2 = printf(BLUE "test 4 : %*d\n" , 8, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %.*d\n" , 0, -2144 );
	res2 = printf(BLUE "test 5 : %.*d\n" , 0, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %.*d\n" , 4, -2144 );
	res2 = printf(BLUE "test 6 : %.*d\n" , 4, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : %.*d\n" , 6, -2144 );
	res2 = printf(BLUE "test 7 : %.*d\n" , 6, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : %.*d\n" , 8, -2144 );
	res2 = printf(BLUE "test 8 : %.*d\n" , 8, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 9 : %.0d\n" , 0 );
	res2 = printf(BLUE "test 9 : %.0d\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 10 : %**0*d\n" , 10,5,10,2444 );
	res2 = printf(BLUE "test 10 : %**0*d\n" , 10,5,10, 2444 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test16(void)
{
	res1 = ft_printf(MAGENTA "test 1 : %*u\n" , 0, -2144 );
	res2 = printf(BLUE "test 1 : %*u\n" , 0, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %*u\n" , 4, -2144 );
	res2 = printf(BLUE "test 2 : %*u\n" , 4, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %*d\n" , 6, -2144 );
	res2 = printf(BLUE "test 3 : %*d\n" , 6, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %*d\n" , 8, -2144 );
	res2 = printf(BLUE "test 4 : %*d\n" , 8, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %.*d\n" , 0, -2144 );
	res2 = printf(BLUE "test 5 : %.*d\n" , 0, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %.*d\n" , 4, -2144 );
	res2 = printf(BLUE "test 6 : %.*d\n" , 4, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : %.*d\n" , 6, -2144 );
	res2 = printf(BLUE "test 7 : %.*d\n" , 6, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : %.*d\n" , 8, -2144 );
	res2 = printf(BLUE "test 8 : %.*d\n" , 8, -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test17(void)
{
	res1 = ft_printf(MAGENTA "test 1 : %0d\n" , 2144 );
	res2 = printf(BLUE "test 1 : %0d\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %04d\n" , 2144 );
	res2 = printf(BLUE "test 2 : %04d\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %06d\n" , 2144 );
	res2 = printf(BLUE "test 3 : %06d\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %010d\n" , 2144 );
	res2 = printf(BLUE "test 4 : %010d\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %0000010d\n" , 2144 );
	res2 = printf(BLUE "test 5 : %0000010d\n" , 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %0d\n" , -2144 );
	res2 = printf(BLUE "test 6 : %0d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : %04d\n" , -2144 );
	res2 = printf(BLUE "test 7 : %04d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : %06d\n" , -2144 );
	res2 = printf(BLUE "test 8 : %06d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 9 : %010d\n" , -2144 );
	res2 = printf(BLUE "test 9 : %010d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 10 : %0000010d\n" , -2144 );
	res2 = printf(BLUE "test 10 : %0000010d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 11 : %0-000010d\n" , -2144 );
	res2 = printf(BLUE "test 11 : %0-000010d\n" , -2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test18(void)
{
	res1 = ft_printf(MAGENTA "test 1 : %.**.-d \n" , 10, 10, 2144 );
	res2 = printf(BLUE "test 1 : %.**.-d \n" , 10, 10, 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %.***   %.*d %d  \n" , 1,2,3, 4, 2144 );
	res2 = printf(BLUE "test 2 : %.***   %.*d %d  \n" , 1,2,3, 4, 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %.***       %.*d %d  \n" , 1,2,3, 4, 2144 );
	res2 = printf(BLUE "test 3 : %.***       %.*d %d  \n" , 1,2,3, 4, 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %*d %**d \n" , 1,2,3, 10, 2144 );
	res2 = printf(BLUE "test 4 : %*d %**d \n" , 1,2,3, 10, 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %***.*d \n" , 1,2,3, 10, 2144 );
	res2 = printf(BLUE "test 5 : %***.*d \n" , 1,2,3, 10, 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %*yolo \n" , 1,2,3, 4, 2144 );
	res2 = printf(BLUE "test 6 : %*yolo \n" , 1,2,3, 4, 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : %..*yolo \n" , 10,2,3, 4, 2144 );
	res2 = printf(BLUE "test 7 : %..*yolo \n" , 10,2,3, 4, 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : %..*dyolo \n" , 1,2,3, 4, 2144 );
	res2 = printf(BLUE "test 8 : %..*dyolo \n" , 1,2,3, 4, 2144 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test19(void)
{
	res1 = ft_printf(MAGENTA "test 1 : %4s \n" , "bonjour" );
	res2 = printf(BLUE "test 1 : %4s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %.4s \n" , "bonjour" );
	res2 = printf(BLUE "test 2 : %.4s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %-4s \n" , "bonjour" );
	res2 = printf(BLUE "test 2 : %-4s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %-.4s \n" , "bonjour" );
	res2 = printf(BLUE "test 3 : %-.4s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %04s \n" , "bonjour" );
	res2 = printf(BLUE "test 4 : %04s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %-0.4s \n" , "bonjour" );
	res2 = printf(BLUE "test 5 : %-0.4s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %0.0s \n" , "bonjour" );
	res2 = printf(BLUE "test 6 : %0.0s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : %.0s \n" , "bonjour" );
	res2 = printf(BLUE "test 7 : %.0s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : %8.8s \n" , "bonjour" );
	res2 = printf(BLUE "test 8 : %8.8s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 9 : %8.0s \n" , "bonjour" );
	res2 = printf(BLUE "test 9 : %8.0s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 10 : %4s \n" , "bonjour" );
	res2 = printf(BLUE "test 10 : %4s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 11 : %.4s \n" , "bonjour" );
	res2 = printf(BLUE "test 11 : %.4s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 12 : %-4s \n" , "bonjour" );
	res2 = printf(BLUE "test 12 : %-4s \n" , "bonjour" );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 13 : %-.4s \n" , 0 );
	res2 = printf(BLUE "test 13 : %-.4s \n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 14 : %04s \n" , 0 );
	res2 = printf(BLUE "test 14 : %04s \n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 15 : %-0.4s \n" , 0 );
	res2 = printf(BLUE "test 15 : %-0.4s \n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 16 : %0.0s \n" , 0 );
	res2 = printf(BLUE "test 16 : %0.0s \n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 17 : %.0s \n" , 0 );
	res2 = printf(BLUE "test 17 : %.0s \n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 18 : %8.8s \n" , 0 );
	res2 = printf(BLUE "test 18 : %8.8s \n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 19 : %8.0s \n" , 0 );
	res2 = printf(BLUE "test 19 : %8.0s \n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test20(void)
{
	res1 = ft_printf(MAGENTA "test 1 : |%4c|\n" , 'a' );
	res2 = printf(BLUE "test 1 : |%4c|\n" , 'a' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : |%.4c|\n" , 'a' );
	res2 = printf(BLUE "test 2 : |%.4c|\n" , 'a' );
		if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : |%-4c|\n" , 'a' );
	res2 = printf(BLUE "test 3 : |%-4c|\n" , 'a' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : |%-.4c|\n" , 'a' );
	res2 = printf(BLUE "test 4 : |%-.4c|\n" , 'a' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : |%04c|\n" , 'a' );
	res2 = printf(BLUE "test 5 : |%04c|\n" , 'a' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : |%-0.4c|\n" , 'a' );
	res2 = printf(BLUE "test 6 : |%-0.4c|\n" , 'a' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : |%0.0c|\n" , 'a' );
	res2 = printf(BLUE "test 7 : |%0.0c|\n" , 'a' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : |%.0c|\n" , 'a' );
	res2 = printf(BLUE "test 8 : |%.0c|\n" , 'a' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 9 : |%8.8c|\n" , 'a' );
	res2 = printf(BLUE "test 9 : |%8.8c|\n" , 'a' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 10 : |%8.0c|\n" , 'a' );
	res2 = printf(BLUE "test 10 : |%8.0c|\n" , 'a' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 11 : |%8.0c|\n" , 0 );
	res2 = printf(BLUE "test 11 : |%8.0c|\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 12 : |%8c|\n" , 0 );
	res2 = printf(BLUE "test 12 : |%8c|\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 13 : |%0.0c|\n" , 0 );
	res2 = printf(BLUE "test 13 : |%0.0c|\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 14 : |%*c|\n" , -21, 0 );
	res2 = printf(BLUE "test 14 : |%*c|\n" , -21, 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 15 : |%*c|\n" , 021, 0 );
	res2 = printf(BLUE "test 15 : |%*c|\n" , 021, 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 16 : |%*c| |%0.0c| |%10c|\n" , 021, 0, 'a', 'a' );
	res2 = printf(BLUE "test 16 : |%*c| |%0.0c| |%10c|\n" , 021, 0, 'a', 'a' );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test21(void)
{
	int el = 4052;
	int *el_p = &el;
	res1 = ft_printf(MAGENTA "test 1 : %*p\n" , 4, el_p );
	res2 = printf(BLUE "test 1 : %*p\n" , 4, el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %.4p\n" , el_p );
	res2 = printf(BLUE "test 2 : %.4p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %-4p\n" , el_p );
	res2 = printf(BLUE "test 3 : %-4p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %016p\n" , el_p );
	res2 = printf(BLUE "test 4 : %016p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %-20.15p\n" , el_p );
	res2 = printf(BLUE "test 5 : %-20.15p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %-20.20p\n" , el_p );
	res2 = printf(BLUE "test 6 : %-20.20p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : %-0.0p\n" , el_p );
	res2 = printf(BLUE "test 7 : %-0.0p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : %04p\n" , el_p );
	res2 = printf(BLUE "test 8 : %04p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 9 : %020.20p\n" , el_p );
	res2 = printf(BLUE "test 9 : %020.20p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 10 : %0.0p\n" , el_p );
	res2 = printf(BLUE "test 10 : %0.0p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 11 : %.20p\n" , el_p );
	res2 = printf(BLUE "test 11 : %.20p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 12 : %20.p\n" , el_p );
	res2 = printf(BLUE "test 12 : %20.p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 13 : %8.8p\n" , el_p );
	res2 = printf(BLUE "test 13 : %8.8p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 14 : %8.8p\n" , 0 );
	res2 = printf(BLUE "test 14 : %8.8p\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 15 : %32p\n" , el_p );
	res2 = printf(BLUE "test 15 : %32p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 16 : %32.32p\n" , el_p );
	res2 = printf(BLUE "test 16 : %32.32p\n" , el_p );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test22(void)
{
	int el = 4052;
	res1 = ft_printf(MAGENTA "test 1 : %*X \n" , 4, &el );
	res2 = printf(BLUE "test 1 : %*X \n" , 4, &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %.4X \n" , &el );
	res2 = printf(BLUE "test 2 : %.4X \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %-4X \n" , &el );
	res2 = printf(BLUE "test 3 : %-4X \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %-20.20X \n" , &el );
	res2 = printf(BLUE "test 4 : %-20.20X \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %-0.0X \n" , &el );
	res2 = printf(BLUE "test 5 : %-0.0X \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %04X \n" , &el );
	res2 = printf(BLUE "test 6 : %04X \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : %020.20X \n" , &el );
	res2 = printf(BLUE "test 7 : %020.20X \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : %0.0X \n" , &el );
	res2 = printf(BLUE "test 8 : %0.0X \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 9 : %.20X \n" , &el );
	res2 = printf(BLUE "test 9 : %.20X \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 10 : %20.X \n" , &el );
	res2 = printf(BLUE "test 10 : %20.X \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 11 : %8.8Xp\n" , &el );
	res2 = printf(BLUE "test 11 : %8.8Xp\n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 12 : %8.0X\n" , 0 );
	res2 = printf(BLUE "test 12 : %8.0X\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test23(void)
{
	int el = 4052;
	res1 = ft_printf(MAGENTA "test 1 : %*x \n" , 4, &el );
	res2 = printf(BLUE "test 1 : %*x \n" , 4, &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %.4x \n" , &el );
	res2 = printf(BLUE "test 2 : %.4x \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %-4x \n" , &el );
	res2 = printf(BLUE "test 3 : %-4x \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %-20.20x \n" , &el );
	res2 = printf(BLUE "test 4 : %-20.20x \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %-0.0x \n" , &el );
	res2 = printf(BLUE "test 5 : %-0.0x \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %04x \n" , &el );
	res2 = printf(BLUE "test 6 : %04x \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : %020.20x \n" , &el );
	res2 = printf(BLUE "test 7 : %020.20x \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : %0.0x \n" , &el );
	res2 = printf(BLUE "test 8 : %0.0x \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 9 : %.20x \n" , &el );
	res2 = printf(BLUE "test 9 : %.20x \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 10 : %20.x \n" , &el );
	res2 = printf(BLUE "test 10 : %20.x \n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 11 : %8.8xp\n" , &el );
	res2 = printf(BLUE "test 11 : %8.8xp\n" , &el );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 12 : %8.0x\n" , 0 );
	res2 = printf(BLUE "test 12 : %8.0x\n" , 0 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

void	test24(void)
{
	res1 = ft_printf(MAGENTA "test 1 : %00d \n" ,  4280 );
	res2 = printf(BLUE "test 1 : %00d \n" ,  4280 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %--d \n" , 4280 );
	res2 = printf(BLUE "test 2 : %--d \n" , 4280 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %..d \n" ,  4280 );
	res2 = printf(BLUE "test 3 : %..d \n" ,  4280 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %**d \n" , 4, 5, 4280 );
	res2 = printf(BLUE "test 4 : %**d \n" , 4, 5, 4280 );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");	
}

void	test25(void)
{
	res1 = ft_printf(MAGENTA "test 1 : %5% \n"  );
	res2 = printf(BLUE "test 1 : %5% \n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 2 : %.5% \n"  );
	res2 = printf(BLUE "test 2 : %.5% \n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 3 : %-5% \n"  );
	res2 = printf(BLUE "test 3 : %-5% \n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 4 : %-05% \n"  );
	res2 = printf(BLUE "test 4 : %-05% \n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 5 : %-.4% \n"  );
	res2 = printf(BLUE "test 5 : %-.4% \n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 6 : %04% \n"  );
	res2 = printf(BLUE "test 6 : %04% \n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 7 : %-0.4% \n"  );
	res2 = printf(BLUE "test 7 : %-0.4% \n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 8 : %0.0% \n"  );
	res2 = printf(BLUE "test 8 : %0.0% \n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 9 : %.0% \n"  );
	res2 = printf(BLUE "test 9 : %.0% \n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 10 : %8.8% \n"  );
	res2 = printf(BLUE "test 10 : %8.8% \n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
	res1 = ft_printf(MAGENTA "test 11 : %8.0% \n"  );
	res2 = printf(BLUE "test 11 : %8.0% \n"  );
	if (res1 == res2)
		printf(GREEN "\n-----------GREAT! ^^----------\n\n");
	else
		printf(RED "\nTOO BAD :(\n\n");
}

int main(int ac, char **av)
{
	if (ac == 1)
	{
		printf(YELLOW "test1, string simple :\n\n");
		test1();
		printf(YELLOW "test2, argument string :\n\n");
		test2();
		printf(YELLOW "test3, argument int d :\n\n");
		test3();
		printf( YELLOW "test4, argument char :\n\n");
		test4();
		printf( YELLOW "test5, argument int i :\n\n");
		test5();
		printf( YELLOW "test6, argument unsigned int :\n\n");
		test6();
		printf( YELLOW "test7, argument address :\n\n");
		test7();
		printf( YELLOW "test8, argument x :\n\n");
		test8();
		printf( YELLOW "test9, argument X :\n\n");
		test9();
		printf( YELLOW "test10, argument %% :\n\n");
		test10();
		printf( YELLOW "test11, all arguments type :\n\n");
		test11();
		printf( YELLOW "test12, flag - :\n\n");
		test12();
		printf( YELLOW "test13, flag 0 :\n\n");
		test13();
		printf( YELLOW "test14, flag . :\n\n");
		test14();
		printf( YELLOW "test15, flag * :\n\n");
		test15();
		printf( YELLOW "test16, flags 0-*. with unsigned int :\n\n");
		test16();
		printf( YELLOW "test17, flag 0 :\n\n");
		test17();
		printf( YELLOW "test18, flags random :\n\n");
		test18();
		printf( YELLOW "test19, flags string :\n\n");
		test19();
		printf( YELLOW "test20, flags char :\n\n");
		test20();
		printf( YELLOW "test21, flags address :\n\n");
		test21();
		printf( YELLOW "test22, flags X :\n\n");
		test22();
		printf( YELLOW "test23, flags x :\n\n");
		test23();
		printf( YELLOW "test24, multiflags --, 00, .. :\n\n");
		test24();
		printf( YELLOW "test25, tests flags and %% :\n\n");
		test25();
		return (0 );
	}	
	if (atoi(av[1]) == 1)
	{
		printf(YELLOW "test1, string simple :\n\n");
		test1();
	}
	if (atoi(av[1]) == 2)
	{
		printf(YELLOW "test2, argument string :\n\n");
	test2();
	}
	if (atoi(av[1]) == 3)
	{
		printf(YELLOW "test3, argument int d :\n\n");
	test3();
	}
	if (atoi(av[1]) == 4)
	{
		printf( YELLOW "test4, argument char :\n\n");
	test4();
	}
	if (atoi(av[1]) == 5)
	{
		printf( YELLOW "test5, argument int i :\n\n");
	test5();
	}
	if (atoi(av[1]) == 6)
	{
		printf( YELLOW "test6, argument unsigned int :\n\n");
	test6();
	}
	if (atoi(av[1]) == 7)
	{
		printf( YELLOW "test7, argument address :\n\n");
	test7();
	}
	if (atoi(av[1]) == 8)
	{
		printf( YELLOW "test8, argument x :\n\n");
	test8();
	}
	if (atoi(av[1]) == 9)
	{
		printf( YELLOW "test9, argument X :\n\n");
	test9();
	}
	if (atoi(av[1]) == 10)
	{
		printf( YELLOW "test10, argument %% :\n\n");
	test10();
	}
	if (atoi(av[1]) == 11)
	{
		printf( YELLOW "test11, all arguments type :\n\n");
	test11();
	}
	if (atoi(av[1]) == 12)
	{
		printf( YELLOW "test12, flag - :\n\n");
	test12();
	}
	if (atoi(av[1]) == 13)
	{
		printf( YELLOW "test13, flag 0 :\n\n");
	test13();
	}
	if (atoi(av[1]) == 14)
	{
		printf( YELLOW "test14, flag . :\n\n");
	test14();
	}
	if (atoi(av[1]) == 15)
	{
		printf( YELLOW "test15, flag * :\n\n");
	test15();
	}
	if (atoi(av[1]) == 16)
	{
		printf( YELLOW "test16, flags 0-*. with unsigned int :\n\n");
	test16();
	}
	if (atoi(av[1]) == 17)
	{
		printf( YELLOW "test17, flag 0 :\n\n");
	test17();
	}
	if (atoi(av[1]) == 18)
	{
		printf( YELLOW "test18, flags random :\n\n");
	test18();
	}
	if (atoi(av[1]) == 19)
	{
		printf( YELLOW "test19, flags string :\n\n");
	test19();
	}
	if (atoi(av[1]) == 20)
{
		printf( YELLOW "test20, flags char :\n\n");
	test20();
	}
	if (atoi(av[1]) == 21)
	{
		printf( YELLOW "test21, flags address :\n\n");
	test21();
	}
	if (atoi(av[1]) == 22)
	{
		printf( YELLOW "test22, flags X :\n\n");
	test22();
	}
	if (atoi(av[1]) == 23)
	{
		printf( YELLOW "test23, flags x :\n\n");
	test23();
	}
	if (atoi(av[1]) == 24)
	{
		printf( YELLOW "test24, multiflags --, 00, .. :\n\n");
	test24();
	}
	if (atoi(av[1]) == 25)
	{
		printf( YELLOW "test25, tests flags and %% :\n\n");
	test25();
	}
}
