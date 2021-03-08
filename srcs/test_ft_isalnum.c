/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:53:43 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/08 00:32:49 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_isalnum(void)
{
	char	c;

	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*      FT_ISALNUM      *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Full Test");
	c = -128;
	while (c < 127)
	{
		ft_putstr("ft_isalnum('");
		ft_putchar(c);
		ft_putstr("') == ");
		ft_putnbr(ft_isalnum(c));
		ft_putstr("  |  ascii tested -> ");
		ft_putnbr(c);
		ft_putchar('\n');
		++c;
	}
	ft_putstr("ft_isalnum('");
	ft_putchar(c);
	ft_putstr("') == ");
	ft_putnbr(ft_isalnum(c));
	ft_putstr("  |  ascii tested -> ");
	ft_putnbr(c);
	ft_putstr("\n\n");
}
