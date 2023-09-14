/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:31:30 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/14 13:37:48 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*concat(char *str1, char *str2)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str1[len] != '\0')
		len++;
	while (str2[i] != '\0')
		str1[len++] = str2[i++];
	str1[len] = '\0';
	return (str1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	if (size > 0)
		len += (size - 1) * ft_strlen(sep);
	res = (char *)malloc(sizeof(char) * (len + 1));
	res[0] = '\0';
	if (res == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		res = concat(res, strs[i]);
		if (i < size - 1)
			res = concat(res, sep);
		i++;
	}
	res[len] = '\0';
	return (res);
}

/*
#include <stdio.h>

int main(void)
{
	char *result[5] = {"Hello", "your", "name", "is", "hyujeong"};
	printf("%s", ft_strjoin(5, result, "abc"));
	return (0);
}
*/
