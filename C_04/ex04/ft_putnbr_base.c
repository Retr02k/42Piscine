/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:21:13 by peleitao          #+#    #+#             */
/*   Updated: 2024/09/01 18:33:03 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	char	digit;
	long	nbr_long;
	int	base_size;

	base_size = ft_strlen(base);

	if (base_size <= 1)
		return;
	
	nbr_long = nbr;
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr_long = -nbr_long;
	}
	if (nbr_long >= base_size)
		ft_putnbr_base(nbr_long / base_size, base);
	digit = base[nbr_long % base_size];
	write (1, &digit, 1);
}

int main(void)
{
	ft_putnbr_base(500, "0123456789"); // decimal
	write(1, "\n", 1);
	ft_putnbr_base(500, "0123456789abcdef"); //hexadecimal
	write(1, "\n", 1);
	ft_putnbr_base(-500, "0123456789abcdef"); //hexadecimal
	write(1, "\n", 1);
	ft_putnbr_base(500, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(500, "01");
	write(1, "\n", 1);
}
