/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:55:52 by peleitao          #+#    #+#             */
/*   Updated: 2024/09/02 18:34:24 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power (int	nb, int	power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int main(void)
{
	int	number;
	int	power;

	number = 2;
	power = -4;

	printf("Number: %d\n", number);
	printf("Power: %d\n", power);
	printf("Powered number: %d\n", ft_iterative_power(number, power));
}