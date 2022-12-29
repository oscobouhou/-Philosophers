/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:17:51 by oboutarf          #+#    #+#             */
/*   Updated: 2022/12/29 23:31:28 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int		main(int ac, char **av)
{
	t_gen	*general;

	if ((ac != 5 && ac != 6) || check_num(av, ac))
		return (ft_putstr(WRONG_INPUT), 1);
	general = init_simulation(av);
	// print_state_after_init(general);
	set_free(general);
	return (0);
}
