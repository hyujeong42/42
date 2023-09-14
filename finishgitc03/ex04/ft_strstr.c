/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:55:32 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/04 15:57:01 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	find(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	a = 0;
	while (str[i] != '\0')
	{		
		if (str[i] == to_find[0])
			if (find(&str[i], to_find))
				return (&str[i]);
		i++;
	}	
	return (0);
}

int	find(char *str, char *to_find)
{
	int	a;

	a = 0;
	while (to_find[a] != '\0')
	{
		if (str[a] != to_find[a])
		{
			return (0);
		}
		a++;
	}
	return (1);
}
