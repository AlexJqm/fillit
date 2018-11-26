/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coremart <coremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:01:03 by coremart          #+#    #+#             */
/*   Updated: 2018/11/26 13:25:58 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"
#include "libft/includes/libft.h"

int		main(int ac, char **av)
{
	int		nb_pcs;

	if (ac != 2)
	{
		ft_color("usage: ./fillit source_file", "red");
		ft_putchar('\n');
		return (0);
	}
	if (!(nb_pcs = ft_check_error(av[1])))
	{
		ft_color("error", "red");
		ft_putchar('\n');
		return (0);
	}
	ft_print_tab(ft_fillit(av[1], nb_pcs));
	return (0);
}
