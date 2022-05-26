/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 05:03:10 by isalgar           #+#    #+#             */
/*   Updated: 2021/11/28 03:38:29 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	rakamlar;

	rakamlar = '0';
	while (rakamlar <= '9')
	{
		write (1, &rakamlar, 1);
		rakamlar++;
	}
}
