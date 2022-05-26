/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:06:27 by isalgar           #+#    #+#             */
/*   Updated: 2021/12/14 09:08:53 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	a;
	int	q;

	a = 1;
	if (ac > 1)
	{
		while (a < ac)
		{
			q = -1;
			while (av[a][++q] != '\0')
				ft_putchar(av[a][q]);
			ft_putchar('\n');
			a++;
		}
	}
	return (0);
}
