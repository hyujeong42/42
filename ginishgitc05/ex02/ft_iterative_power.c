/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:54:39 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/09 20:12:27 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	for (int i=-5; i<8; i++)
		printf("[%d] ex02: %d\n", i, ft_iterative_power(i, i));
		printf("\n");
	for (int i=-5; i<8; i++)
		printf("[%d] ex02: %d\n", i, ft_iterative_power(i, 0));
		printf("\n");
	for (int i=-5; i<8; i++)
		printf("[%d] ex02: %d\n", i, ft_iterative_power(i, 2));
		printf("\n\n");
}
*/
