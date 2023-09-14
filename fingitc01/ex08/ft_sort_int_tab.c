/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:36:07 by hyujeong          #+#    #+#             */
/*   Updated: 2023/08/29 11:57:54 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = size - 1;
	while (a >= 1)
	{
		b = 1;
		while (b <= a)
		{
			if (tab[b] < tab[b - 1])
			{
				c = tab[b];
				tab[b] = tab[b - 1];
				tab[b - 1] = c;
			}
			b++;
		}
		a--;
	}
}
