/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:18:35 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/07 16:38:51 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*temp;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	temp = (int *)malloc((max - min) * sizeof(int));
	if (!temp)
		return (-1);
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	*range = temp;
	return (i);
}
/*
int main(void) {
    int *result;
    int size;
    int i = 0;

    size = ft_ultimate_range(&result, 1, 10);

    while (i < size) {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n");

    free(result);
}
*/
