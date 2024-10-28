/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadeira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:43:16 by nmadeira          #+#    #+#             */
/*   Updated: 2024/08/03 11:45:41 by nmadeira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int a, int b)
{
	int	c;
	int	l;

	l = 1;
	while (l <= b && a > 0)
	{
		c = 1;
		while (c <= a)
		{
			if ((c == 1 && l == 1) || (l == b && c == 1))
				ft_putchar('A');
			else if ((c == a && l == 1) || (c == a && l == b))
				ft_putchar('C');
			else if ((c == 1) || (c == a) || (l == 1) || (l == b))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
