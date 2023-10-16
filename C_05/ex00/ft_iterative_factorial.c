/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:08:36 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/16 14:23:43 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;
	int	y;

	i = 1;
	x = nb;
	y = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i < y)
	{
		x = x * (nb - 1);
		nb--;
		i++;
	}
	return (x);
}
/*int	main(void)
{
	printf("%d", ft_iterative_factorial(-5)); 
}*/
