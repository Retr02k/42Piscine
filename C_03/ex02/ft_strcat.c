/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 05:06:48 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/27 02:45:54 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		(dest[i + j]) = src[j];
		j++;
	}
	(dest[i + j]) = '\0';
	return (dest);
}
/*
int main(void)
{
	char dest[100] = "Hello ";
	char src[] = "World";

	printf("Source string: %s\n", src);
	ft_strcat(dest, src);
	printf("String concatenation: %s\n", dest);
}
*/