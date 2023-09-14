/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:01:17 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/09 16:34:34 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	result;

	result = 0;
	while ((result * result) <= (long)nb)
	{
		if ((long)nb == result * result)
			return (result);
		result++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(224));
}
*/
