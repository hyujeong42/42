/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:22:21 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/14 19:54:59 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

void	ft_putnbr(int nb)
{
	char	a;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-1 * nb);
	}
	else if (nb >= 0)
	{
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			a = nb + '0';
			write(1, &a, 1);
		}
	}
}

int	ft_checkop(char *str)
{
	if (str[1] == '\0')
	{
		if (str[0] == '+')
			return (0);
		if (str[0] == '-')
			return (1);
		if (str[0] == '*')
			return (2);
		if (str[0] == '/')
			return (3);
		if (str[0] == '%')
			return (4);
	}
	return (-1);
}

void	ft_printres(int a, int b, int (*f)(int, int))
{
	int	result;

	result = f(a, b);
	ft_putnbr(result);
	write(1, "\n", 1);
}

void	ft_error(int n)
{
	char	*s1;
	char	*s2;

	s1 = "Stop : division by zero\n";
	s2 = "Stop : modulo by zero\n";
	if (n == 0)
		write(1, s1, 24);
	if (n == 1)
		write(1, s2, 22);
}
