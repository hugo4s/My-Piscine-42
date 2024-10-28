/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:20:08 by husamuel          #+#    #+#             */
/*   Updated: 2024/08/05 10:16:15 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	ft_lowercase(str);
	while (str[i] != '\0')
	{
		if (str[0] <= 'z' && str[0] >= 'a')
			str[0] = str[0] - 32;
		if ((str[i] > 0 && str[i] < '0')
			|| (str[i] > 'z')
			|| (str[i] > 'Z' && str[i] < 'a')
			|| (str[i] > '9' && str[i] < 65))
		{
			if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str[] = "ola, tudo bem? 42palAvras quarenta-e-duas; cinquenta+e+um\n";
	printf("%s", str);
	printf("%s", ft_strcapitalize(str));
}
*/
