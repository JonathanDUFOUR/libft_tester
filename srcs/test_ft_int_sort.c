/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_int_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:51:21 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/08 00:24:45 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#define SIZE0 1
#define SIZE1 5
#define SIZE2 2
#define SIZE3 5
#define SIZE4 3

void	test_ft_int_sort(void)
{
	int	tab0[SIZE0] = {2};
	int	tab1[SIZE1] = {2, 0, -2147483648, 2, 2147483647};
	int	tab2[SIZE2] = {42, 42};
	int	tab3[SIZE3] = {4, 3, 2, -2, -3};
	int	tab4[SIZE4] = {256, 256, 256};
	int	*sort;
	int	i;

	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*      FT_INT_SORT     *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	ft_putstr("tab  == {");
	i = -1;
	while (++i < (SIZE0 - 1))
	{
		ft_putnbr(tab0[i]);
		ft_putstr(", ");
	}
	ft_putnbr(tab0[i]);
	ft_putendl("}");
	sort = ft_intsort(tab0, SIZE0);
	ft_putstr("sort == {");
	i = -1;
	while (++i < (SIZE0 - 1))
	{
		ft_putnbr(sort[i]);
		ft_putstr(", ");
	}
	ft_putnbr(sort[i]);
	ft_putendl("}");
	free(sort);
	ft_putchar('\n');

	ft_putendl("Test 01");
	ft_putstr("tab  == {");
	i = -1;
	while (++i < (SIZE1 - 1))
	{
		ft_putnbr(tab1[i]);
		ft_putstr(", ");
	}
	ft_putnbr(tab1[i]);
	ft_putendl("}");
	sort = ft_intsort(tab1, SIZE1);
	ft_putstr("sort == {");
	i = -1;
	while (++i < (SIZE1 - 1))
	{
		ft_putnbr(sort[i]);
		ft_putstr(", ");
	}
	ft_putnbr(sort[i]);
	ft_putendl("}");
	free(sort);
	ft_putchar('\n');

	ft_putendl("Test 02");
	ft_putstr("tab  == {");
	i = -1;
	while (++i < (SIZE2 - 1))
	{
		ft_putnbr(tab2[i]);
		ft_putstr(", ");
	}
	ft_putnbr(tab2[i]);
	ft_putendl("}");
	sort = ft_intsort(tab2, SIZE2);
	ft_putstr("sort == {");
	i = -1;
	while (++i < (SIZE2 - 1))
	{
		ft_putnbr(sort[i]);
		ft_putstr(", ");
	}
	ft_putnbr(sort[i]);
	ft_putendl("}");
	free(sort);
	ft_putchar('\n');

	ft_putendl("Test 03");
	ft_putstr("tab  == {");
	i = -1;
	while (++i < (SIZE3 - 1))
	{
		ft_putnbr(tab3[i]);
		ft_putstr(", ");
	}
	ft_putnbr(tab3[i]);
	ft_putendl("}");
	sort = ft_intsort(tab3, SIZE3);
	ft_putstr("sort == {");
	i = -1;
	while (++i < (SIZE3 - 1))
	{
		ft_putnbr(sort[i]);
		ft_putstr(", ");
	}
	ft_putnbr(sort[i]);
	ft_putendl("}");
	free(sort);
	ft_putchar('\n');

	ft_putendl("Test 04");
	ft_putstr("tab  == {");
	i = -1;
	while (++i < (SIZE4 - 1))
	{
		ft_putnbr(tab4[i]);
		ft_putstr(", ");
	}
	ft_putnbr(tab4[i]);
	ft_putendl("}");
	sort = ft_intsort(tab4, SIZE4);
	ft_putstr("sort == {");
	i = -1;
	while (++i < (SIZE4 - 1))
	{
		ft_putnbr(sort[i]);
		ft_putstr(", ");
	}
	ft_putnbr(sort[i]);
	ft_putendl("}");
	free(sort);
	ft_putchar('\n');
}
