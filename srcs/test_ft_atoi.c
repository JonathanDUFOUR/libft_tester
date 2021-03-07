/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:08:21 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/07 20:15:26 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	test_ft_atoi(void)
{
	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*        FT_ATOI       *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	ft_putstr("   atoi(\"\") == ");
	ft_putnbr(atoi(""));
	ft_putchar('\n');
	ft_putstr("ft_atoi(\"\") == ");
	ft_putnbr(ft_atoi(""));
	ft_putstr("\n\n");

	ft_putendl("Test 01");
	ft_putstr("   atoi(\"   -42 55\") == ");
	ft_putnbr(atoi("   -42 55"));
	ft_putchar('\n');
	ft_putstr("ft_atoi(\"   -42 55\") == ");
	ft_putnbr(ft_atoi("   -42 55"));
	ft_putstr("\n\n");

	ft_putendl("Test 02");
	ft_putstr("   atoi(\"   -+-42\") == ");
	ft_putnbr(atoi("   -+-42"));
	ft_putchar('\n');
	ft_putstr("ft_atoi(\"  -+-42\") == ");
	ft_putnbr(ft_atoi("  -+-42"));
	ft_putstr("\n\n");

	ft_putendl("Test 03");
	ft_putstr("   atoi(\"   - 42\") == ");
	ft_putnbr(atoi("   - 42"));
	ft_putchar('\n');
	ft_putstr("ft_atoi(\"  - 42\") == ");
	ft_putnbr(ft_atoi("  - 42"));
	ft_putstr("\n\n");

	ft_putendl("Test 04");
	ft_putstr("   atoi(\" -2147483648\") == ");
	ft_putnbr(atoi(" -2147483648"));
	ft_putchar('\n');
	ft_putstr("ft_atoi(\" -2147483648\") == ");
	ft_putnbr(ft_atoi(" -2147483648"));
	ft_putstr("\n\n");

	ft_putendl("Test 05");
	ft_putstr("   atoi(\"  +002147483647\") == ");
	ft_putnbr(atoi("  +002147483647"));
	ft_putchar('\n');
	ft_putstr("ft_atoi(\"  +002147483647\") == ");
	ft_putnbr(ft_atoi("  +002147483647"));
	ft_putstr("\n\n");

// SegFault Test
/* 
	ft_putendl("Test 06");
	ft_putstr("   atoi(NULL) == ");
	ft_putnbr(atoi(NULL));
	ft_putchar('\n');
	ft_putstr("ft_atoi(NULL) == ");
	ft_putnbr(ft_atoi(NULL));
	ft_putstr("\n\n");
*/
}
