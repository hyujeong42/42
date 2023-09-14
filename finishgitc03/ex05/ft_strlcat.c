/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:41:17 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/04 17:56:52 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	src_len(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	b;
	unsigned int	g;
	unsigned int	h;

	g = src_len(dest);
	h = src_len(src);
	if (g >= size)
	{
		return (size + h);
	}	
	i = 0;
	b = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[b] != '\0' && size > i + 1)
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (g + h);
}

/*
#include <stdio.h>

int	main()
{
	char dest[] = "12345";
	char src[] = "1234";
	printf("%d\n", ft_strlcat(dest, src, 7));
	printf("%s\n", dest);

}
*/
