/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:20:31 by isalgar           #+#    #+#             */
/*   Updated: 2021/12/14 09:20:35 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	k;

	i = 1;
	if (ac > 1)
	{
		while (ac > 1)
		{
			k = -1;
			while (av[ac - 1][++k] != '\0')
				ft_putchar(av[ac - 1][k]);
			ft_putchar('\n');
			ac--;
		}
	}
	return (0);
}
