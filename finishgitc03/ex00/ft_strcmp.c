/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:30:29 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/04 17:56:08 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' ||  *s2 != '\0')
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

/*
#include <stdio.h>
int	main() 
{
	char s1[] = "123";
	char s2[] = "124";
	printf("%d", ft_strcmp(s1, s2));
}
*/