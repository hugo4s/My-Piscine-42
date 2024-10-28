/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:45:01 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/13 18:49:47 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	number;
	int	i;

	number = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			number++;
		i++;
	}
	return (number);
}
/*
int ft(char *str)
{
	if (*str == 'A')
		return (1);
	return (0);
}
int main(void) {
    char *strings[] = {"A", "wor", "Astring", "alfabeto", NULL};

    int count = ft_count_if(strings, 4, ft);
    printf("%d\n", count);

    return 0;
}
*/
