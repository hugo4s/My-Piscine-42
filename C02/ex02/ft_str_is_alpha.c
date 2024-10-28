/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:29:08 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/02 10:14:57 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (str[0] == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
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

    output = ft_str_is_alpha("asdf");
    printf("%d\n", output);

    output = ft_str_is_alpha("QWERTY");
    printf("%d\n", output);

    output = ft_str_is_alpha("asdf1234");
    printf("%d\n", output);

    output = ft_str_is_alpha("999");
    printf("%d\n", output);

    output = ft_str_is_alpha("");
    printf("%d\n", output);

    return 0;
}
*/
