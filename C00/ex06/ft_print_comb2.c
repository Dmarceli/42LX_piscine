/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:35:22 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/11 11:29:19 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	grande_print_if(int x, int y)
{
	ft_putchar(x / 10 + '0');
	ft_putchar(x % 10 + '0');
	ft_putchar(' ');
	ft_putchar(y / 10 + '0');
	ft_putchar(y % 10 + '0');
	if ((x != 9) || (x != 8))
	{
		if (!(x == 98 && y == 99))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 100)
	{
		y = x + 1;
		while (y < 100)
		{
			grande_print_if(x, y);
			y++;
		}
		x++;
	}
}
