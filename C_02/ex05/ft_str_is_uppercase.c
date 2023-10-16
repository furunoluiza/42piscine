/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:03:52 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/08 14:02:05 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{	
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
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
	c = ft_str_is_uppercase(ptr);
	printf("%d", c);
}*/
