/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:11:16 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/07 21:57:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	test_ft_calloc(void)
{
	char	*ptr;
	int		i;

	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*       FT_CALLOC      *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	ft_putendl("ptr = calloc(6, sizeof(char))");
	ptr = calloc(6, sizeof(char));
	ft_putstr("ptr == ");
	i = -1;
	while (++i < 6)
	{
		ft_print_bits(ptr[i], 1);
		ft_putchar(' ');
	}
	free(ptr);
	ft_putstr("\n\n");

	ft_putendl("ptr = ft_calloc(6, sizeof(char))");
	ptr = ft_calloc(6, sizeof(char));
	ft_putstr("ptr == ");
	i = -1;
	while (++i < 6)
	{
		ft_print_bits(ptr[i], 1);
		ft_putchar(' ');
	}
	free(ptr);
	ft_putstr("\n\n");
		
	ft_putendl("Test 01");
	ft_putendl("ptr = calloc(1, sizeof(char))");
	ptr = calloc(1, sizeof(char));
	ft_putstr("ptr == ");
	i = -1;
	while (++i < 1)
	{
		ft_print_bits(ptr[i], 1);
		ft_putchar(' ');
	}
	free(ptr);
	ft_putstr("\n\n");

	ft_putendl("ptr = ft_calloc(1, sizeof(char))");
	ptr = ft_calloc(1, sizeof(char));
	ft_putstr("ptr == ");
	i = -1;
	while (++i < 1)
	{
		ft_print_bits(ptr[i], 1);
		ft_putchar(' ');
	}
	free(ptr);
	ft_putstr("\n\n");

	ft_putendl("Test 02");
	ft_putendl("ptr = calloc(0, sizeof(char))");
	ptr = calloc(0, sizeof(char));
	ft_putstr("ptr == ");
	i = -1;
	while (++i < 0)
	{
		ft_print_bits(ptr[i], 1);
		ft_putchar(' ');
	}
	free(ptr);
	ft_putstr("\n\n");

	ft_putendl("ptr = ft_calloc(0, sizeof(char))");
	ptr = ft_calloc(0, sizeof(char));
	ft_putstr("ptr == ");
	i = -1;
	while (++i < 0)
	{
		ft_print_bits(ptr[i], 1);
		ft_putchar(' ');
	}
	free(ptr);
	ft_putstr("\n\n");
}
