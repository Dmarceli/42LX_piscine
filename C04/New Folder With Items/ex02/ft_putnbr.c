/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:22:19 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/23 12:14:17 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
// #include <stdio.h>

// void	ft_putnbr(int n);

// int		main(void)
// {
//     printf(" (printed) should be 42");
//     ft_putnbr(42);
//     printf("\n (printed) should be 1");
//     ft_putnbr(1);
//     printf("\n (printed) should be -1");
//     ft_putnbr(-1);
//     printf("\n (printed) should be 2147483647");
//     ft_putnbr(2147483647);
//     printf("\n (printed) should be -21474836478");
//     ft_putnbr(-2147483648);
//     printf("\n");
//     return (0);
// }