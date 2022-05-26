/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 08:06:43 by isalgar           #+#    #+#             */
/*   Updated: 2021/11/28 05:50:38 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_kanint(int num)
{
	char	birler;
	char	onlar;

	birler = (num % 10) + 48;
	onlar = (num / 10) + 48;
	write(1, &onlar, 1);
	write(1, &birler, 1);
}

void	ft_remint(int fir, int sec)
{
	ft_kanint(fir);
	write(1, " ", 1);
	ft_kanint(sec);
	if (!(fir == 98 && sec == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{	
			ft_remint (f, s);
		s++;
		}
		f++;
	}
}
