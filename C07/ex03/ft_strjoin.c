/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:55:36 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/07 18:02:57 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_lenstrs(int size, char **strs, char *sep)
{
	int	i;
	int	comp;

	i = 0;
	comp = 0;
	while (i < size)
	{
		comp += ft_strlen(strs[i]);
		i++;
	}
	comp += ft_strlen(sep) * (size - 1);
	return (comp);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	char	*dest;
	int		i;

	string = (char *)malloc(sizeof(char) * (ft_lenstrs(size, strs, sep) + 1));
	if (!string)
		return (NULL);
	dest = string;
	i = 0;
	while (i < size)
	{
		ft_strcpy(dest, strs[i]);
		dest += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(dest, sep);
			dest += ft_strlen(sep);
		}
		i++;
	}
	*dest = '\0';
	return (string);
}
/*
int main(void)
{
	char *strs[] = {"hello", "world", "!"};
	char *sep = " ";
	char *result;
	result = ft_strjoin(3, strs, sep);

	printf("%s\n", result);
}*/
