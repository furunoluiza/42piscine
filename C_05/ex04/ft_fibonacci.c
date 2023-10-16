/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:38:17 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/15 14:57:04 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	f;

	f = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
	{
		f = f + ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (f);
}
/*int	main(void)
{
	printf("%d", ft_fibonacci(5));
}*/
