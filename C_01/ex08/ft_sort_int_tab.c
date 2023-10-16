/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:21:15 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/06 12:01:16 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*int	main(void)
{
	int	i;
	int	size;

	int ptr[5] = {3, 9, 1, 5, 0};
	size = 5;
	ft_sort_int_tab(ptr, size);
	i = 0;
	while (i < 5)
	{
		printf("%d", ptr[i]);
		i++;
	}
	return(0);
}*/
