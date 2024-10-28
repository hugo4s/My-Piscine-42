/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:40:15 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/13 18:44:30 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
/*
int is_longer_than_five(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
        if (i > 5) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char *strings[] = {"hello", "wor", "string", "alfabeto", NULL};

	int i = 0;
	while(strings[i] != NULL) {
        	printf("%d\n", is_longer_than_five(strings[i]));
        	i++;
        }
}
*/
