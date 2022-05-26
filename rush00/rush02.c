/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:54:15 by baslanha          #+#    #+#             */
/*   Updated: 2021/11/28 18:18:07 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 1;
    row = 1;
    if (x ==0 || y == 0)
    {
        return;
    }
	while (row <= y)
	{
		if ((col == 1 && row == 1) || (row == 1 && col == x))
			ft_putchar ('A');
		else if ((col == 1 && row == y) || (col == x && row == y))
			ft_putchar ('C');
		else if ((col == 1) || (col == x) || (row == y) || (row == 1))
			ft_putchar ('B');
		else
			ft_putchar (' ');
		if (col == x)
		{
			row++;
			ft_putchar ('\n');
			col = 0;
		}
		col++;
	}
}
