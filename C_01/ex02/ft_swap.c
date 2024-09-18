/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 00:56:18 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/20 15:31:38 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
	int	x = 2;
	int	y = 4;
	
	printf("x: %d, y: %d\n", x, y);
	ft_swap(&x, &y);
	printf("x: %d, y: %d\n", x, y);
}
*/