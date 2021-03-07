/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_file_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:16:04 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/07 23:19:25 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	test_ft_file_size(void)
{
	char	*f;

	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*     FT_FILE_SIZE     *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	f = ft_strdup("./ressources/Lorem_Ipsum");
	ft_putstr("ft_file_size(\"");
	ft_putstr(f);
	ft_putstr("\") == ");
	ft_putlnbr(ft_file_size(f));
	free(f);
	ft_putstr("\n\n");

	ft_putendl("Test 01");
	f = ft_strdup("./ressources/empty");
	ft_putstr("ft_file_size(\"");
	ft_putstr(f);
	ft_putstr("\") == ");
	ft_putlnbr(ft_file_size(f));
	free(f);
	ft_putstr("\n\n");

	ft_putendl("Test 02");
	f = ft_strdup("./ressources/only_42");
	ft_putstr("ft_file_size(\"");
	ft_putstr(f);
	ft_putstr("\") == ");
	ft_putlnbr(ft_file_size(f));
	free(f);
	ft_putstr("\n\n");

	ft_putendl("Test 03");
	f = ft_strdup("./Makefile");
	ft_putstr("ft_file_size(\"");
	ft_putstr(f);
	ft_putstr("\") == ");
	ft_putlnbr(ft_file_size(f));
	free(f);
	ft_putstr("\n\n");
}
