/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:09:19 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/07 20:19:34 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	test_ft_atol(void)
{
	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*        FT_ATOL       *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	ft_putstr("   atol(\"\") == ");
	ft_putlnbr(atol(""));
	ft_putchar('\n');
	ft_putstr("ft_atol(\"\") == ");
	ft_putlnbr(ft_atol(""));
	ft_putstr("\n\n");

	ft_putendl("Test 01");
	ft_putstr("   atol(\"   -42 55\") == ");
	ft_putlnbr(atol("   -42 55"));
	ft_putchar('\n');
	ft_putstr("ft_atol(\"   -42 55\") == ");
	ft_putlnbr(ft_atol("   -42 55"));
	ft_putstr("\n\n");

	ft_putendl("Test 02");
	ft_putstr("   atol(\"   -+-42\") == ");
	ft_putlnbr(atol("   -+-42"));
	ft_putchar('\n');
	ft_putstr("ft_atol(\"  -+-42\") == ");
	ft_putlnbr(ft_atol("  -+-42"));
	ft_putstr("\n\n");

	ft_putendl("Test 03");
	ft_putstr("   atol(\"   - 42\") == ");
	ft_putlnbr(atol("   - 42"));
	ft_putchar('\n');
	ft_putstr("ft_atol(\"  - 42\") == ");
	ft_putlnbr(ft_atol("  - 42"));
	ft_putstr("\n\n");

	ft_putendl("Test 04");
	ft_putstr("   atol(\" -9223372036854775808\") == ");
	ft_putlnbr(atol(" -9223372036854775808"));
	ft_putchar('\n');
	ft_putstr("ft_atol(\" -9223372036854775808\") == ");
	ft_putlnbr(ft_atol(" -9223372036854775808"));
	ft_putstr("\n\n");

	ft_putendl("Test 05");
	ft_putstr("   atol(\"  +009223372036854775807\") == ");
	ft_putlnbr(atol("  +009223372036854775807"));
	ft_putchar('\n');
	ft_putstr("ft_atol(\"  +009223372036854775807\") == ");
	ft_putlnbr(ft_atol("  +009223372036854775807"));
	ft_putstr("\n\n");

// SegFault Test
/* 
	ft_putendl("Test 06");
	ft_putstr("   atol(NULL) == ");
	ft_putlnbr(atol(NULL));
	ft_putchar('\n');
	ft_putstr("ft_atol(NULL) == ");
	ft_putlnbr(ft_atol(NULL));
	ft_putstr("\n\n");
*/
}
