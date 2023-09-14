/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:13:20 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/09 20:12:52 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}

/*
#include <stdio.h>

int	main(void)
{
for (int i=-10; i<=12; i++)
		printf("[%d] ex01: %d\n", i, ft_recursive_factorial(i));
	printf("\n\n");
	printf("==============\n");
}
*/
