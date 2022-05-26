/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:01:30 by isalgar           #+#    #+#             */
/*   Updated: 2021/12/15 18:03:06 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_create_str(int size, char **strs, char *sep)
{
	char	*tab;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * size - 1;
	if (size <= 0)
		len = 1;
	tab = (char *)malloc(sizeof(char) * len);
	if (tab == NULL)
		return (0);
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;
	int		j;
	int		k;

	i = -1;
	k = 0;
	tab = ft_create_str(size, strs, sep);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			tab[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			tab[k++] = sep[j];
			j++;
		}
	}
	tab[k] = '\0';
	return (tab);
}
