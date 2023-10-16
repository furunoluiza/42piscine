/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:22:15 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/08/08 13:57:36 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

char	*ft_strcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char dest[] = "luiza";
	char src[] = "um";
	char *dest_ptr;
	int i;

	i = 0;

	dest_ptr = ft_strcpy(dest, src);
	while (dest_ptr[i] != '\0')
	{
		write(1, &dest_ptr[i], 1);
		i++;
	}
}*/	
