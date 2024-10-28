/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:12:39 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/01 14:27:56 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (str[0] == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main() {
    int output;

    output = ft_str_is_numeric("asdf");
    printf("%d\n", output);

    output = ft_str_is_numeric("QWERTY");
    printf("%d\n", output);

    output = ft_str_is_numeric("asdf1234");
    printf("%d\n", output);

    output = ft_str_is_numeric("999");
    printf("%d\n", output);

    output = ft_str_is_numeric("");
    printf("%d\n", output);
}
*/
