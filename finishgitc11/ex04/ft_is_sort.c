/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:50:21 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/14 19:52:51 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	count;
	int	tmp;

	count = 0;
	while (1 < length--)
	{
		tmp = f(tab[length], tab[length - 1]);
		if (tmp == 0)
			continue ;
		if (count == 0)
			count = tmp;
		else if ((count < 0 && tmp > 0) || (count > 0 && tmp < 0))
			return (0);
	}
	return (1);
}
