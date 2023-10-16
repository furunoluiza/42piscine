/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:04:56 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/06 11:30:43 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		swap = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = swap;
		i++;
		size--;
	}
}
/*int	main(void)
{	
	int	i;

	int num[3] = {3,0,1};
	ft_rev_int_tab(num, 3);
	i = 0;
	while (i < 3)
	{
		printf("%d", num[i]);
		i++;	
	}
	return(0);
}*/
