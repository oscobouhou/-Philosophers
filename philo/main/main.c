/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:17:51 by oboutarf          #+#    #+#             */
/*   Updated: 2022/12/29 16:25:38 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int		main(int ac, char **av)
{
	t_gen	*general;
	int		i = 0;

	if ((ac != 5 && ac != 6) || check_num(av, ac))
		return (ft_putstr(WRONG_INPUT), 1);
	general = init_simulation(av);
	return (0);
}

/* while (i < general->n_philo)
{
	printf("id: %d   lfork = %d  rfork = %d\n", general->philo[i].id, general->philo[i].lfork, general->philo[i].rfork);		
	i++;
} */