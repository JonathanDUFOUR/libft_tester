/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_cut_spaces.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:15:02 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/07 23:11:02 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	test_ft_cut_spaces(void)
{
	char	*s;
	char	*res;

	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*     FT_CUT_SPACES    *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	s = ft_strdup("");
	res = ft_cut_spaces(s);
	ft_putstr("ft_cut_spaces(\"");
	ft_putstr(s);
	ft_putstr("\") == \"");
	ft_putstr(res);
	ft_putendl("\"\n");
	free(s);
	free(res);

	ft_putendl("Test 01");
	s = ft_strdup("   ");
	res = ft_cut_spaces(s);
	ft_putstr("ft_cut_spaces(\"");
	ft_putstr(s);
	ft_putstr("\") == \"");
	ft_putstr(res);
	ft_putendl("\"\n");
	free(s);
	free(res);

	ft_putendl("Test 02");
	s = ft_strdup("HelloWorld");
	res = ft_cut_spaces(s);
	ft_putstr("ft_cut_spaces(\"");
	ft_putstr(s);
	ft_putstr("\") == \"");
	ft_putstr(res);
	ft_putendl("\"\n");
	free(s);
	free(res);

	ft_putendl("Test 03");
	s = ft_strdup("  Coucou		les	amis  \n!");
	res = ft_cut_spaces(s);
	ft_putstr("ft_cut_spaces(\"");
	ft_putstr(s);
	ft_putstr("\") == \"");
	ft_putstr(res);
	ft_putendl("\"\n");
	free(s);
	free(res);
}
