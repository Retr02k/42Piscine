/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:20:52 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/27 02:49:56 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == 0)
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char string[64] = "This is a test string for testing ft_strstr";
	char *result;
	
	result = ft_strstr(string,"test");

	if (result)
	{
		printf("String found:\n");
		printf("First occurance of string \"test\" in \"%s\" is:\n%s\n", \
		string, result);
	}
	else
	{
		printf("String not found!\n");
	}
	return (0);
}
*/