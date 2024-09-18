/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:57:09 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/25 03:51:13 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char array[] = "aufmb ca";
	printf("%d\n", ft_str_is_printable(array));
}
*/