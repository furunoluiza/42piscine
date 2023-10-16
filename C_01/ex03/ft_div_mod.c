/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:33:39 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/06 11:35:32 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int	n;
	int	m;
	int	d;
	int	r;

	n = 10;
	m = 2;
	d = 30;
	r = 5; 

	ft_div_mod(n, m, &d, &r);
	printf("%d %d", d, r);
	return (0);
}*/
