/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 23:08:33 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/20 18:03:29 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
int main(void)
{
	
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 10;
	int *ptr = tab;
	
	
	
	printf("Original Array: ");
	for(int i = 0; i < size; i++)
		printf("%d", ptr[i]);
	printf("\n");
	
	ft_rev_int_tab(tab, size);
	printf("Reversed Array: ");
	for(int i = 0; i < size; i++)
		printf("%d", ptr[i]);
	printf("\n");
}
*/