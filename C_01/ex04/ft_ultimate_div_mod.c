/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:31:14 by retr0             #+#    #+#             */
/*   Updated: 2024/08/20 17:58:55 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_resto;

	temp_div = (*a / *b);
	temp_resto = (*a % *b);
	a = temp_div;
	*b = temp_resto;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 9;

	ft_ultimate_div_mod(&a, &b),
	printf("a: %d\n", a);
	printf("b: %d\n", b);
}
*/