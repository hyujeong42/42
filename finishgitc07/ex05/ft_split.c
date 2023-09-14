/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:29:45 by hyujeong          #+#    #+#             */
/*   Updated: 2023/09/13 14:54:26 by hyujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_seperator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	flag;
	int	i;
	int	count;

	flag = 0;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (char_seperator(str[i], charset) == 1)
			flag = 0;
		else
		{
			if (flag == 0)
				count++;
			flag = 1;
		}
		i++;
	}
	return (count);
}

char	*ft_strdup(char *str, char *charset)
{
	int		n;
	int		i;
	char	*result;

	n = 0;
	i = 0;
	while (char_seperator(str[n], charset) == 0)
		n++;
	result = (char *)malloc(sizeof(char) * (n + 1));
	while (i < n)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = 0;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		index;
	int		flag;

	flag = 0;
	res = (char **)malloc(sizeof(char *) * (word_count(str, charset) + 1));
	index = 0;
	while (*str != '\0')
	{
		if (char_seperator(*str, charset) == 1)
			flag = 0;
		else
		{
			if (flag == 0)
				res[index++] = ft_strdup(str, charset);
			flag = 1;
		}
		str++;
	}
	res[index] = 0;
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*c = "tcabaegsqrt";
	char	*s = "t";
	int		i;
	char	**a;

	a = ft_split(c, s);
	i = 0;
	while (a[i])
	{
		printf("[%s]\n", a[i]);
		i++;
	}
}
*/
