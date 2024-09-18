/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:20:58 by peleitao          #+#    #+#             */
/*   Updated: 2024/09/04 00:25:41 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

	if (nb <= 1)
		return 0;
	if (nb == 2)
		return 1;
	if (nb % 2 == 0)
		return 0;
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}

int ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return nb;
}

int main()
{
	int number = 21;
	int next = ft_find_next_prime(number);
	printf("The next prime number to %d is %d.\n", number, next);
}