/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:01:05 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/09 16:27:13 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	ascci[128];
	int	i;

	if (base[0] == 0 || base[1] == 0)
		return (0);
	i = 0;
	while (i < 128)
		ascci[i++] = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (ascci[(int) base[i]] == 1)
			return (0);
		ascci[(int) base[i]] = 1;
		i++;
	}
	return (1);
}

long long	check_minus(long long n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	return (n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			nb_base;
	long long	n;
	int			result[32];
	int			i;

	if (check_base(base) == 0)
		return ;
	nb_base = 0;
	while (base[nb_base])
		nb_base++;
	n = (long long) nbr;
	n = check_minus(n);
	i = 0;
	if (n == 0)
		write(1, base, 1);
	while (n > 0)
	{
		result[i++] = n % nb_base;
		n = n / nb_base;
	}
	i--;
	while (i >= 0)
	{
		write(1, &base[result[i--]], 1);
	}
}

/*
int main(void)
{
	ft_putnbr_base(0, "a123456789");
	return (0);
}
*/
