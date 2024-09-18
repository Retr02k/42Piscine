/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 21:35:14 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/27 02:36:57 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i + j] = src[j];
		j++;
	}
	(dest[i + j]) = '\0';
	return (dest);
}
/*
int main(void)
{
	char dest[100] = "Hello ";
	char src[] = "World!";

	printf("Source string: %s\n", src);
	printf("String concatenated: %s\n", ft_strncat(dest, src, 2));
}
*/