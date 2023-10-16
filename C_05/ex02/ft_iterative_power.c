/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 10:42:19 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/16 14:30:44 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	i = 1;
	x = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			nb = nb * x;
			i++;
		}
	}
	return (nb);
}
/*int	main(void)
{
	printf("%d", ft_iterative_power(-2, 2));
}*/
