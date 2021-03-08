/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ischarset.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:56:21 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/08 01:03:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	test_ft_ischarset(void)
{
	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*     FT_ISCHARSET     *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	ft_putstr("ft_ischarset('a', NULL) == ");
	ft_putnbr(ft_ischarset('a', NULL));
	ft_putstr("\n\n");

	ft_putendl("Test 01");
	ft_putstr("ft_ischarset('a', \"charset\") == ");
	ft_putnbr(ft_ischarset('a', "charset"));
	ft_putstr("\n\n");

	ft_putendl("Test 02");
	ft_putstr("ft_ischarset('a', \"pouic\") == ");
	ft_putnbr(ft_ischarset('a', "pouic"));
	ft_putstr("\n\n");
}
