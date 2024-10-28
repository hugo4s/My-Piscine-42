/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:51:16 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/13 19:11:11 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	i = 0;
	sorted = 1;
	while (i < length - 1 && sorted)
	{
		if ((*f)(tab[i], tab [i + 1]) < 0)
			sorted = 0;
		i++;
	}
	if (sorted != 1)
	{
		sorted = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i + 1], tab[i]) < 0)
				return (0);
			i++;
		}
	}
	return (1);
}
/*
int compare(int a, int b)
{
    return (a - b);
}

int main(void)
{
    int tab1[] = {1, 2, 3, 4, 5};
    int tab2[] = {5, 4, 3, 2, 1};
    int tab3[] = {1, 3, 2, 4, 5};

    printf("tab1 is sorted: %d\n", ft_is_sort(tab1, 5, compare));
    printf("tab2 is sorted: %d\n", ft_is_sort(tab2, 5, compare));
    printf("tab3 is sorted: %d\n", ft_is_sort(tab3, 5, compare));

    return 0;
}
*/
