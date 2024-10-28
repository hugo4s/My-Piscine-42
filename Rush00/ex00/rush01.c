/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadeira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:14:27 by nmadeira          #+#    #+#             */
/*   Updated: 2024/08/03 11:15:13 by nmadeira         ###   ########.fr       */
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
			if ((c == 1 && l == 1) || (c == a && l == b && c != 1 && l != 1))
				ft_putchar('/');
			else if ((c == a && l == 1) || (c == 1 && l == b))
				ft_putchar('\\');
			else if ((c == 1) || (c == a) || (l == 1) || (l == b))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
