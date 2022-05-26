/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:22:10 by isalgar           #+#    #+#             */
/*   Updated: 2021/12/14 07:47:06 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	aux;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		aux = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (aux);
	}
	else
		return (-1);
}
