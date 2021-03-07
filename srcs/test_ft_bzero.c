/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:10:32 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/07 21:10:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	test_ft_bzero(void)
{
	char	*ptr;
	char	*to_free;
	size_t	size;

	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*       FT_BZERO       *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	ptr = NULL;
	size = 0;
	ft_putendl("ptr == NULL");
	bzero(ptr, size);
	ft_putstr("   bzero(ptr) -> ptr == ");
	if (!ptr)
		ft_putendl("NULL");
	else
	{
		while (size--)
		{
			ft_print_bits(*ptr++, 1);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	ptr = NULL;
	size = 0;
	ft_putendl("ptr == NULL");
	ft_bzero(ptr, size);
	ft_putstr("ft_bzero(ptr) -> ptr == ");
	if (!ptr)
		ft_putendl("NULL");
	else
	{
		while (size--)
		{
			ft_print_bits(*ptr++, 1);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	ft_putchar('\n');

	ft_putendl("Test 01");
	ptr = strdup("Hello");
	size = strlen(ptr) + 1;
	ft_putendl("ptr == \"Hello\"");
	bzero(ptr, size);
	ft_putstr("   bzero(ptr) -> ptr == ");
	if (!ptr)
		ft_putendl("NULL");
	else
	{
		to_free = ptr;
		while (size--)
		{
			ft_print_bits(*ptr++, 1);
			ft_putchar(' ');
		}
		free(to_free);
		ft_putchar('\n');
	}
	ptr = strdup("Hello");
	size = strlen(ptr) + 1;
	ft_putendl("ptr == \"Hello\"");
	ft_bzero(ptr, size);
	ft_putstr("ft_bzero(ptr) -> ptr == ");
	if (!ptr)
		ft_putendl("NULL");
	else
	{
		to_free = ptr;
		while (size--)
		{
			ft_print_bits(*ptr++, 1);
			ft_putchar(' ');
		}
		free(to_free);
		ft_putchar('\n');
	}
	ft_putchar('\n');

	ft_putendl("Test 02");
	ptr = strdup("");
	size = strlen(ptr) + 1;
	ft_putendl("ptr == \"\"");
	bzero(ptr, size);
	ft_putstr("   bzero(ptr) -> ptr == ");
	if (!ptr)
		ft_putendl("NULL");
	else
	{
		to_free = ptr;
		while (size--)
		{
			ft_print_bits(*ptr++, 1);
			ft_putchar(' ');
		}
		free(to_free);
		ft_putchar('\n');
	}
	ptr = strdup("");
	size = strlen(ptr) + 1;
	ft_putendl("ptr == \"\"");
	ft_bzero(ptr, size);
	ft_putstr("ft_bzero(ptr) -> ptr == ");
	if (!ptr)
		ft_putendl("NULL");
	else
	{
		to_free = ptr;
		while (size--)
		{
			ft_print_bits(*ptr++, 1);
			ft_putchar(' ');
		}
		free(to_free);
		ft_putchar('\n');
	}
	ft_putchar('\n');

	ft_putendl("Test 03");
	ptr = strdup("42");
	size = strlen(ptr) + 1;
	ft_putendl("ptr == \"42\"");
	bzero(ptr, size);
	ft_putstr("   bzero(ptr) -> ptr == ");
	if (!ptr)
		ft_putendl("NULL");
	else
	{
		to_free = ptr;
		while (size--)
		{
			ft_print_bits(*ptr++, 1);
			ft_putchar(' ');
		}
		free(to_free);
		ft_putchar('\n');
	}
	ptr = strdup("42");
	size = strlen(ptr) + 1;
	ft_putendl("ptr == \"42\"");
	ft_bzero(ptr, size);
	ft_putstr("ft_bzero(ptr) -> ptr == ");
	if (!ptr)
		ft_putendl("NULL");
	else
	{
		to_free = ptr;
		while (size--)
		{
			ft_print_bits(*ptr++, 1);
			ft_putchar(' ');
		}
		free(to_free);
		ft_putchar('\n');
	}
	ft_putchar('\n');
}
