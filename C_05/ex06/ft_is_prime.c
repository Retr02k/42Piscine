/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:12:54 by peleitao          #+#    #+#             */
/*   Updated: 2024/09/04 15:54:47 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int n)
{
    int i;

    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    i = 3;
    while (i * i <= n)
	{
        if (n % i == 0)
		{
            return 0;
        }
        i += 2;
    }
    return 1;
}

int main()
{
    int number = 3;

	printf("%d\n", ft_is_prime(number));
	return 0;
}