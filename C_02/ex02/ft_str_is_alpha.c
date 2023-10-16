/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:18:16 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/08 14:26:07 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a') && (str[i] <= 'z'))
			|| ((str[i] >= 'A') && (str[i] <= 'Z')))
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
	
	char	str[] = ""; 
	c = ft_str_is_alpha(str);
	printf("%d", c);
	return (0);
}*/
