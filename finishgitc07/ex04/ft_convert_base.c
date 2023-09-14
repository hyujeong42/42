/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:52:37 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/13 16:45:49 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_baselen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_base_valid(char *base)
{
	int	ascii[256];
	int	i;

	if (base[0] == 0 || base[1] == 0)
		return (0);
	i = 0;
	while (i < 256)
	{
		ascii[i] = 0;
		i++;
	}
	i = 0;
	while (base[i])
	{	
		if (ascii[(int)base[i]] == 1 || base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		ascii[(int)base[i]] = 1;
		i++;
	}
	return (1);
}

int	ft_get_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *nbr, char *b)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	while (nbr[i] == ' ' || (9 <= nbr[i] && nbr[i] <= 13))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_get_index(b, nbr[i]) != -1)
	{
		result = result * ft_baselen(b) + ft_get_index(b, nbr[i]) * sign;
		i++;
	}
	return (result);
}

int	result_len(int nbr, int base_length)
{
	int	i;

	i = 0;
	if (nbr < 0)
		i++;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / base_length;
		i++;
	}
	return (i);
}
