/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:55:46 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/07/28 11:05:03 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 97;
	while (count <= 122)
	{
		write (1, &count, 1);
		count++;
	}	
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
