/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:29:59 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/11 21:42:51 by hyujeong         ###   ########.fr       */
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
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (ascci[(int) base[i]] == 1)
			return (0);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		ascci[(int) base[i]] = 1;
		i++;
	}
	return (1);
}

int	ft_is_in_base(char *base, char c)
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

int	skip_space_and_set_flag(char *str, int *flag)
{
	int	i;

	i = 0;
	*flag = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*flag *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	int			flag;
	int			result;
	int			base_size;
	int			mul;

	if (check_base(base) == 0)
		return (0);
	mul = 1;
	i = skip_space_and_set_flag(str, &flag);
	base_size = 0;
	while (base[base_size])
		base_size++;
	result = 0;
	while (ft_is_in_base(base, str[i]) != -1)
	{
		result = result * base_size + ft_is_in_base(base, str[i]) * flag;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char num[] = "10010";
	char base[] = "001";
	printf("%d", ft_atoi_base(num, base));
}
*/
