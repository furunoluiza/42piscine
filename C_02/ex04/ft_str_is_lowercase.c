/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 09:51:10 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/08 14:15:42 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
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
	c = ft_str_is_lowercase(ptr);
	printf("%d", c);
}*/
