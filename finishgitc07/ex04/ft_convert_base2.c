/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:52:47 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/13 14:51:31 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_valid(char *base);
int	ft_baselen(char *base);
int	ft_atoi_base(char *nbr, char *base_from);
int	result_len(int nbr, int base_length);

char	*ft_from_to(long long nbr, char *base_to)
{
	char	*result;
	int		base_length;
	int		len;

	result = (char *) malloc(34);
	base_length = ft_baselen(base_to);
	len = result_len((int) nbr, base_length);
	result[len--] = '\0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	while (1)
	{
		result[len--] = base_to[nbr % base_length];
		nbr /= base_length;
		if (nbr == 0)
			break ;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result;
	char	*c;

	if (ft_base_valid(base_from) == 0 || ft_base_valid(base_to) == 0)
		return (0);
	result = ft_atoi_base(nbr, base_from);
	c = ft_from_to((long long) result, base_to);
	return (c);
}

/*
#include <unistd.h>

void	putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}
int main(void)
{
	char	*ret = ft_convert_base("     +++---2048", "0123456789", "01");
	putstr(ret);
//	write(1, ft_convert_base("-12", "0123456789", "01"), 10);
	return (0);
}
*/
