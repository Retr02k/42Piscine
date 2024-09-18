/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:31:07 by peleitao          #+#    #+#             */
/*   Updated: 2024/09/01 20:16:06 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	whitespaces(char	*str,int	*index)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))
		i++;
	while ((str[i] == 43) || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*index = i;
	return (sign);
}

int	base_char_index(char	c, char	*base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int	base_size;
	int	result;
	int	i;
	int	sign;
	int	base_digit;

	base_size = ft_strlen(base);
	if (base_size <= 1)
		return (0);

	sign = whitespaces(str, &i);
	result = 0;
	while (str[i])
	{
		base_digit = base_char_index(str[i], base);
		if (base_digit == -1)
			break ;

		result *= base_size;
		result += base_digit;
		i++;
	}
	return (result * sign);
}

int main(void)
{
	int	num1;
	int	num2;
	int	num3;
	int	num4;

	num1 = ft_atoi_base("500", "0123456789");	// decimal
	num2 = ft_atoi_base("101010", "01");	//binary
	num3 = ft_atoi_base("42", "0123456789abcdef");	//hexadecimal
	num4 = ft_atoi_base("fiy", "poneyvif");	//octal

	printf("Result; %d\n", num1);
	printf("Result; %d\n", num2);
	printf("Result; %d\n", num3);
	printf("Result; %d\n", num4);
}