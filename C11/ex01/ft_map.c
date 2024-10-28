/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:33:24 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/13 18:39:58 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	array = (int *)malloc(sizeof(int) * length);
	if (!array)
		return (NULL);
	i = 0;
	while (i < length)
	{
		array[i] = (*f)(tab[i]);
		i++;
	}
	return (array);
}
/*
int double_value(int x) {
    return x * 2;
}

int main() {
	int numbers[] = {1, 2, 3, 4, 5};
	int i = 0;
	int *result = ft_map(numbers, 5, double_value);
	while(i < 5) {
        	printf("%d ", result[i]);
	i++;
        }
    printf("\n");
}
*/
