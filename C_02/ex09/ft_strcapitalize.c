/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peleitao <peleitao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:20:05 by peleitao          #+#    #+#             */
/*   Updated: 2024/08/25 04:18:55 by peleitao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	to_upper(char *c)
{
	if ((*c >= 'a' && *c <= 'z'))
	{
		*c -= 32;
	}
}

void	to_lower(char *c)
{
	if ((*c >= 'A' && *c <= 'Z'))
	{
		*c += 32;
	}
}

int	is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || \
	(c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !is_alphanumeric(str[i - 1]))
		{
			to_upper(&str[i]);
		}
		else
		{
			to_lower(&str[i]);
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("original: %s\n", str);
	ft_strcapitalize(str);
	printf("capitalizada: %s\n", str);
}
*/