/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:32:47 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/16 14:32:12 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
/*int	main(void)
{
	printf("%d", ft_recursive_power(-2, 5));
}*/
