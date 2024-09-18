/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:11:01 by retr0             #+#    #+#             */
/*   Updated: 2024/08/19 19:27:22 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int main(void)
{
	int	a;
	int	b;
	int	x;
	int	y;

	a = 9;
	b = 4;

	ft_div_mod(a, b, &x, &y);
	printf("x: %d\n", x);
	printf("y: %x\n", y);
}
*/