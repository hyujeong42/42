/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:04:25 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/11 19:44:27 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (++i <= nb)
		result *= i;
	return (result);
}

/*
#include <stdio.h>

int main(void)
{
	for (int i=-10; i<=12; i++)
		printf("[%d] ex00: %d\n", i, ft_iterative_factorial(i));
	printf("\n\n");
}
*/
