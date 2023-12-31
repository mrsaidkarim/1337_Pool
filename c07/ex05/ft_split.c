/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:08:04 by skarim            #+#    #+#             */
/*   Updated: 2023/09/02 17:15:41 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_issep(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_countwords(char *str, char *charset)
{
	int	nbr;
	int	inword;

	inword = 0;
	nbr = 0;
	while (*str)
	{
		if (ft_issep(*str, charset))
			inword = 0;
		else if (inword == 0)
		{
			inword = 1;
			nbr++;
		}
		str++;
	}
	return (nbr);
}

char	*ft_strdup(char *str, int start, int end)
{
	char	*res;
	int		i;

	i = 0;
	if (end > start)
	{
		res = (char *)malloc(sizeof(char) * (end - start + 1));
		if (res == NULL)
			return (NULL);
		while (start < end)
		{
			res[i] = str[start];
			start++;
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		index;
	int		from;

	i = 0;
	index = 0;
	res = (char **)malloc(sizeof(char *) * (ft_countwords(str, charset) + 1));
	if (res == NULL)
		return (NULL);
	while (str[i])
	{
		while (ft_issep(str[i], charset) && str[i])
			i++;
		from = i;
		while (!ft_issep(str[i], charset) && str[i])
			i++;
		if (ft_strdup(str, from, i))
		{
			res[index] = ft_strdup(str, from, i);
			index++;
		}
	}
	res[index] = 0;
	return (res);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char **tab;

	tab = ft_split(av[1], av[2]);
	while (*tab != 0)
	{
		printf("%s", *tab);
		if (*(tab + 1) != 0)
			printf("\n");
		tab++;
	}
	return (0);
}*/
