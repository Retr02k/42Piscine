/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 22:13:07 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/19 19:23:51 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	a = 0;
	int	*b = &a;
	int	**c = &b;
	int	***d = &c;
	int	****e = &d;
	int	*****f = &e;
	int	******g = &f;
	int	*******h = &g;
	int	********i = &h;
	int	*********j = &i;

	printf("%d\n", *********j);
	ft_ultimate_ft(j);
	printf("%d\n", *********j);
}

