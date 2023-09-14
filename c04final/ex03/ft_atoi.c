/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:12:56 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/09 16:20:11 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	long long	result;
	int			positive;

	result = 0;
	positive = 1;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
	{
		str++;
	}	
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			positive *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += (*str - '0') * positive;
		str++;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_atoi("    \t\t ++--++--3258"));
}
*/
