/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:05:26 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/29 18:18:18 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	space(char	*str, int	*ptr_i)
{
	int count;
	int i;

	count = 1;
	i = 0;
	while(((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))
	{
		i++;
	}
	while((str[i] == 43) || (str[i] == 45))
	{
		if (str[i] == 45)
		{	
			count *= -1;
		}
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char	*str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = space(str, &i);
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

int main(void)
{
	char s[] =" ---+--+1234ab567";
	printf("%d\n", ft_atoi(s));
}