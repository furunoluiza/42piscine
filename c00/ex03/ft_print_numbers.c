/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:10:02 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/07/28 10:49:40 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	count;

	count = 48;
	while (count <= 57)
	{
		write(1, &count, 1);
		count ++;
	}	
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
