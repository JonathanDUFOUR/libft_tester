/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_convert_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:12:40 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/07 22:33:59 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	test_ft_convert_base(void)
{
	char	*res;

	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*    FT_CONVERT_BASE   *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	ft_putstr("ft_convert_base(NULL, NULL, NULL) == \"");
	if ((res = ft_convert_base(NULL, NULL, NULL)))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");

	ft_putendl("Test 01");
	ft_putstr("ft_convert_base(NULL, NULL, \"01\") == \"");
	if ((res = ft_convert_base(NULL, NULL, "01")))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");

	ft_putendl("Test 02");
	ft_putstr("ft_convert_base(NULL, \"01\", NULL) == \"");
	if ((res = ft_convert_base(NULL, "01", NULL)))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");

	ft_putendl("Test 03");
	ft_putstr("ft_convert_base(NULL, \"01\", \"poneyvif\") == \"");
	if ((res = ft_convert_base(NULL, "01", "poneyvif")))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");

	ft_putendl("Test 04");
	ft_putstr("ft_convert_base(\"  -42\", NULL, NULL) == \"");
	if ((res = ft_convert_base("  -42", NULL, NULL)))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");

	ft_putendl("Test 05");
	ft_putstr("ft_convert_base(\"  -42\", NULL, \"01\") == \"");
	if ((res = ft_convert_base("  -42", NULL, "01")))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");

	ft_putendl("Test 06");
	ft_putstr("ft_convert_base(\"  -42\", \"0123456789\", NULL) == \"");
	if ((res = ft_convert_base("  -42", "0123456789", NULL)))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");

	ft_putendl("Test 07");
	ft_putstr("ft_convert_base(\"  -42\", \"0123456789\", \"poneyvif\") == \"");
	if ((res = ft_convert_base("  -42", "0123456789", "poneyvif")))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");

	ft_putendl("Test 08");
	ft_putstr("ft_convert_base(\"  --11\", \"01\", \"0123456789\") == \"");
	if ((res = ft_convert_base("  --11", "01", "0123456789")))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");

	ft_putendl("Test 09");
	ft_putstr("ft_convert_base(\"  +1111111111111111111111111111111\", \"01\", \"0123456789ABCDEF\") == \"");
	if ((res = ft_convert_base("  +1111111111111111111111111111111", "01", "0123456789ABCDEF")))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");

	ft_putendl("Test 10");
	ft_putstr("ft_convert_base(\" -80000000+42\", \"0123456789ABCDEF\", \"poneyvif\") == \"");
	if ((res = ft_convert_base(" -80000000+42", "0123456789ABCDEF", "poneyvif")))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");

	ft_putendl("Test 11");
	ft_putstr("ft_convert_base(\" -80000000+42\", \"0123456789ABCDEF+-\", \"poneyvif\") == \"");
	if ((res = ft_convert_base(" -80000000+42", "0123456789ABCDEF+-", "poneyvif")))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");

	ft_putendl("Test 12");
	ft_putstr("ft_convert_base(\" -80000000+42\", \"0123456789ABCDEF\", \"poney vif\") == \"");
	if ((res = ft_convert_base(" -80000000+42", "0123456789ABCDEF", "poney vif")))
	{
		ft_putstr(res);
		free(res);
	}
	else
		ft_putstr("(null)");
	ft_putstr("\"\n\n");
}
