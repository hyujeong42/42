/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:55:46 by hyujeong          #+#    #+#             */
/*   Updated: 2023/08/28 17:38:05 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{	
	int	a;
	int	c;

	a = 0;
	while (a < size / 2)
	{	
			c = tab[a];
			tab[a] = tab[size - a - 1];
			tab[size - a - 1] = c;
			a++;
	}
}
