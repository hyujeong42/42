/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:59:41 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/09 20:11:51 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	for (int i=-5; i<8; i++)
		printf("[%d] ex03: %d\n", i, ft_recursive_power(i, i));
	printf("\n");
	for (int i=-5; i<8; i++)
		printf("[%d] ex03: %d\n", i, ft_recursive_power(i, 0));
	printf("\n");
	for (int i=-5; i<8; i++)
		printf("[%d] ex03: %d\n", i, ft_recursive_power(i, 2));
	printf("==============\n");
}
*/
