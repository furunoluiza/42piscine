/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 09:19:23 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/08 14:00:31 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
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

	char	ptr[] = "";
	c = ft_str_is_numeric(ptr);
	printf("%d", c);
	return (0);
}*/
