/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:46:45 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/07 11:06:20 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*strcp;

	i = 0;
	while (src[i])
	{
		i++;
	}
	strcp = (char *)malloc(sizeof(char) * (i + 1));
	if (!strcp)
		return (0);
	i = 0;
	while (src[i])
	{
		strcp[i] = src[i];
		i++;
	}
	strcp[i] = '\0';
	return (strcp);
}
/*
int main(void)
{
	char *string1 = "Hello World";
	char *string2 = ft_strdup(string1);
	printf("%s\n", string1);
	printf("%s\n", string2);
}
*/
