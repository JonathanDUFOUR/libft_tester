/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:03:32 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/07 19:47:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	test_ft_atoi_base(void)
{
	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*     FT_ATOI_BASE     *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	ft_putstr("ft_atoi_base(\"\", NULL) == ");
	ft_putnbr(ft_atoi_base("", NULL));
	ft_putstr("\n\n");

	ft_putendl("Test 01");
	ft_putstr("ft_atoi_base(\"  -42\", NULL) == ");
	ft_putnbr(ft_atoi_base("  -42", NULL));
	ft_putstr("\n\n");

	ft_putendl("Test 02");
	ft_putstr("ft_atoi_base(\"  -42\", \"0123456789\") == ");
	ft_putnbr(ft_atoi_base("  -42", "0123456789"));
	ft_putstr("\n\n");

	ft_putendl("Test 03");
	ft_putstr("ft_atoi_base(\"  -42\", \"012341234\") == ");
	ft_putnbr(ft_atoi_base("  -42", NULL));
	ft_putstr("\n\n");

	ft_putendl("Test 04");
	ft_putstr("ft_atoi_base(\"  -42\", \"0123456789+-\") == ");
	ft_putnbr(ft_atoi_base("  -42", "0123456789+-"));
	ft_putstr("\n\n");

	ft_putendl("Test 05");
	ft_putstr("ft_atoi_base(\"  -42\", \"01\") == ");
	ft_putnbr(ft_atoi_base("  -42", "01"));
	ft_putstr("\n\n");

	ft_putendl("Test 06");
	ft_putstr("ft_atoi_base(\"  +vn\", \"poneyvif\") == ");
	ft_putnbr(ft_atoi_base("  +vn", "poneyvif"));
	ft_putstr("\n\n");

	ft_putendl("Test 07");
	ft_putstr("ft_atoi_base(\"-10000000000000000000000000000000\", \"01\") == ");
	ft_putnbr(ft_atoi_base("-10000000000000000000000000000000", "01"));
	ft_putstr("\n\n");
}
