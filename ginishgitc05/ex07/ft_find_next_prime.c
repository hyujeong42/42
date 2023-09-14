/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:04:21 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/11 19:42:59 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	while ((long long)(i * i) <= (long long) nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 1;
		}
		i++;
	}
	return (nb);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	for (int i=0; i<5; i++)
	{
	int n = rand();
	printf("[%d] ex07: %d\n", n, ft_find_next_prime(n));
	}
	printf("\n\n");
}
*/
