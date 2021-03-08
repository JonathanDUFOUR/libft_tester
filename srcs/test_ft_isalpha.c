/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:54:35 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/08 00:43:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_isalpha(void)
{
	char c;

	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*      FT_ISALPHA      *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Full Test");
	c = -128;
	while (c < 127)
	{
		ft_putstr("ft_isalpha('");
		ft_putchar(c);
		ft_putstr("') == ");
		ft_putnbr(ft_isalpha(c));
		ft_putstr("  |  ascii tested -> ");
		ft_putnbr(c);
		ft_putchar('\n');
		++c;
	}
	ft_putstr("ft_isalpha('");
	ft_putchar(c);
	ft_putstr("') == ");
	ft_putnbr(ft_isalpha(c));
	ft_putstr("  |  ascii tested -> ");
	ft_putnbr(c);
	ft_putstr("\n\n");
}
