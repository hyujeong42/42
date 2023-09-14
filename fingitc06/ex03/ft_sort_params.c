/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:10:52 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/09 19:32:51 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s1 < *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
	}
	return (0);
}

int	ft_strlen(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_sort(int num, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < num)
	{
		j = i + 1;
		while (j <= num)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	n;

	n = 1;
	ft_sort(argc - 1, argv);
	while (n < argc)
	{
		write(1, argv[n], ft_strlen(argv[n]));
		write(1, "\n", 1);
		++n;
	}
	return (0);
}
