/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:44:25 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/20 18:01:38 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_strlen(char	*str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = ft_strlen("Acertei!");
	b = ft_strlen(" ");
	c = ft_strlen(" \n");
	printf("The number of chars is: %d\n", a);
	printf("The number of chars is: %d\n", b);
	printf("The number of chars is: %d\n", c);
}

