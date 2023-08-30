/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:20:54 by skarim            #+#    #+#             */
/*   Updated: 2023/08/25 12:13:58 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (i <= nb)
		{
			f *= i;
			i++;
		}
		return (f);
	}
	return (0);
}