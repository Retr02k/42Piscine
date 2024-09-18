/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:21:34 by peleitao          #+#    #+#             */
/*   Updated: 2024/09/02 16:54:51 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int	nb)
{	
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	while (nb > 1)
		return (nb * ft_iterative_factorial(nb - 1));
	return (0);
}

int main(void)
{
	int	number;

	number = 5;
	printf("Number: %d\n", number);
	printf("Factorial number: %d\n", ft_iterative_factorial(number));
}