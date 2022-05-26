/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 03:39:56 by isalgar           #+#    #+#             */
/*   Updated: 2021/11/28 03:13:01 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	alfabe;

	alfabe = 'a';
	while (alfabe <= 'z')
	{
		write(1, &alfabe, 1);
		alfabe++;
	}
}
