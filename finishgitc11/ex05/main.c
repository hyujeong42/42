/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:53:07 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/14 19:55:49 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_calc(char **argv)
{
	int	a;
	int	b;
	int	op;
	int	(*arr[5])(int, int);

	arr[0] = ft_add;
	arr[1] = ft_sub;
	arr[2] = ft_mul;
	arr[3] = ft_div;
	arr[4] = ft_mod;
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	op = ft_checkop(argv[2]);
	if (op == -1)
		write(1, "0\n", 2);
	else if (b == 0 && op == 3)
		ft_error(0);
	else if (b == 0 && op == 4)
		ft_error(1);
	else
		ft_printres(a, b, arr[op]);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_calc(argv);
	}
	return (0);
}
