/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:42:18 by skarim            #+#    #+#             */
/*   Updated: 2023/08/23 19:36:36 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char *to_find)
{
	char	*str_tmp;
	char	*find_tmp;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		str_tmp = str;
		find_tmp = to_find;
		while (*str_tmp && *find_tmp && *str_tmp == *find_tmp)
		{
			str_tmp++;
			find_tmp++;
		}
		if (*find_tmp == '\0')
			return (str);
		str++;
	}
	return (0);
}
