/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_indexof.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:18:33 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/07 23:33:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	test_ft_indexof(void)
{
	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*      FT_INDEXOF      *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	ft_putstr("ft_indexof('a', NULL) == ");
	ft_putlnbr(ft_indexof('a', NULL));
	ft_putstr("\n\n");

	ft_putendl("Test 01");
	ft_putstr("ft_indexof('a', \"  abba\") == ");
	ft_putlnbr(ft_indexof('a', "  abba"));
	ft_putstr("\n\n");

	ft_putendl("Test 02");
	ft_putstr("ft_indexof('a', \"sexy\") == ");
	ft_putlnbr(ft_indexof('a', "sexy"));
	ft_putstr("\n\n");
}
