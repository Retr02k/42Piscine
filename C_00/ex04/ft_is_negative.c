/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:57:36 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/17 18:59:58 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int i)
{
	if (i < 0)
		write(1, "N\n", 2);
	else
		write(1, "P\n", 2);
}

int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(0);
	ft_is_negative(-3456);
	ft_is_negative(2345);
}