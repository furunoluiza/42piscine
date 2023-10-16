/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:13:38 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/08 14:02:37 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			c++;
		i++;
	}
	if ((i == c) || (i == 0))
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	int	c;

	char ptr[] = "";
	c = ft_str_is_printable(ptr);
	printf("%d", c);
}*/
