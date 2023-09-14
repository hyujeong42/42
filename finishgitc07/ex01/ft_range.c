/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:58:54 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/13 14:49:41 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (0);
	range = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while ((max - 1) >= (min + i))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*
#include <stdio.h>

int	main(void)
{
	int	*ret = ft_range(5, 10);
	for (int i = 0; i < 5; i++)
	printf("%d ", ret[i]);
	printf("\n");
}
*/
