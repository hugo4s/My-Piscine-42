/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:27:07 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/13 18:33:05 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
void print_number(int num)
{
    printf("%d ", num);
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int length = 6;

    ft_foreach(numbers, length, print_number);
    printf("\n");
}
*/
