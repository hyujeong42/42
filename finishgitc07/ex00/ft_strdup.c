/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:06:05 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/12 14:29:23 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		n;
	char	*ptr;

	n = 0;
	while (src[n] != '\0')
		n++;
	ptr = (char *)malloc(sizeof(char) * (n + 1));
	while (n >= 0)
	{
		ptr[n] = src[n];
		n--;
	}
	return (ptr);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strdup("i"));
}
*/
