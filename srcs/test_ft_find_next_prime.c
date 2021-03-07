/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_find_next_prime.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:17:39 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/07 23:25:15 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_find_next_prime(void)
{
	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*  FT_FIND_NEXT_PRIME  *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	ft_putstr("ft_find_next_prime(0) == ");
	ft_putnbr(ft_find_next_prime(0));
	ft_putstr("\n\n");

	ft_putendl("Test 01");
	ft_putstr("ft_find_next_prime(-2147483648) == ");
	ft_putnbr(ft_find_next_prime(-2147483648));
	ft_putstr("\n\n");

	ft_putendl("Test 02");
	ft_putstr("ft_find_next_prime(14) == ");
	ft_putnbr(ft_find_next_prime(14));
	ft_putstr("\n\n");

	ft_putendl("Test 03");
	ft_putstr("ft_find_next_prime(2147483647) == ");
	ft_putnbr(ft_find_next_prime(2147483647));
	ft_putstr("\n\n");

	ft_putendl("Test 04");
	ft_putstr("ft_find_next_prime(4096) == ");
	ft_putnbr(ft_find_next_prime(4096));
	ft_putstr("\n\n");
}
