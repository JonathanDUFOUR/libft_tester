/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_cat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:12:01 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/07 22:09:54 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	test_ft_cat(void)
{
	char	*f;

	ft_putendl("************************");
	ft_putendl("*                      *");
	ft_putendl("*        FT_CAT        *");
	ft_putendl("*                      *");
	ft_putendl("************************");

	ft_putendl("Test 00");
	ft_putendl("ft_cat(./ressources/Lorem_Ipsum) :");
	f = ft_strdup("./ressources/Lorem_Ipsum");
	ft_cat(&f);
	free(f);
	ft_putstr("\n\n");
	
	ft_putendl("Test 01");
	ft_putendl("ft_cat(./ressources/empty) :");
	f = ft_strdup("./ressources/empty");
	ft_cat(&f);
	free(f);
	ft_putstr("\n\n");
	
	ft_putendl("Test 02");
	ft_putendl("ft_cat(./ressources/only_42) :");
	f = ft_strdup("./ressources/only_42");
	ft_cat(&f);
	free(f);
}
