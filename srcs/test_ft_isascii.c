/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:55:23 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/08 00:35:46 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_isascii(void)
{
	char	c;
	
	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*      FT_ISASCII      *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Full Test");
	c = -128;
	while (c < 127)
	{
		ft_putstr("ft_isascii('");
		ft_putchar(c);
		ft_putstr("') == ");
		ft_putnbr(ft_isascii(c));
		ft_putstr("  |  ascii tested -> ");
		ft_putnbr(c);
		ft_putchar('\n');
		++c;
	}
	ft_putstr("ft_isascii('");
	ft_putchar(c);
	ft_putstr("') == ");
	ft_putnbr(ft_isascii(c));
	ft_putstr("  |  ascii tested -> ");
	ft_putnbr(c);
	ft_putstr("\n\n");
}
