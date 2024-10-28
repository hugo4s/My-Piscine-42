/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:53:28 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/07 13:54:10 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int main(void)
{
	int *result;
	int i = 0;

    result = ft_range(1, 10);

    while (i < 9)
    {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n");

    free(result);
    return 0;
}
*/
