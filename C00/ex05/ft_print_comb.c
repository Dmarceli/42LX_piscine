/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:19:04 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/11 11:28:49 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int n1, int n2, int n3)
{
	char	c;

	c = '0' + n1;
	write(1, &c, 1);
	c = '0' + n2;
	write(1, &c, 1);
	c = '0' + n3;
	write(1, &c, 1);
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	while (n1 < 7)
	{
		n2 = n1 + 1;
		while (n2 <= 8)
		{
			n3 = n2 + 1;
			while (n3 <= 9)
			{
				print_num(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
	write(1, "789", 3);
}
