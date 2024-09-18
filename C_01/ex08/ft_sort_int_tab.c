/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:09:17 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/20 18:04:19 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	sorted;
	int	i;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				sorted = 0;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
	}
}
/*
int main(void)
{
	int array[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int size = 10;
	int *ptr = array;
	
	
	
	printf("Original Array: ");
	for(int i = 0; i < size; i++)
		printf("%d", array[i]);
	printf("\n");

	ft_sort_int_tab(ptr, size);

	printf("Sorted Array: ");
	for(int i = 0; i < size; i++)
		printf("%d", array[i]);
	printf("\n");	
}
*/