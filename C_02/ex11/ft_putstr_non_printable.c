/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:45:30 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/26 15:47:30 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(char c)
{
	char	*base;
	char	hex[2];

	base = "0123456789abcdef";
	hex[0] = base[(c / 16) % 16];
	hex[1] = base[c % 16];
	write (1, hex, 2);
}

void	ft_putstr_non_printable(char	*str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || str[i] > 126)
		{
			write(1, "\\", 1);
			print_hex(str[i]);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}
/*
int main(void)
{
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	write (1, "\n", 1);
	return (0);
}
*/