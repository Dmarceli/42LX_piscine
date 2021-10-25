/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:49:04 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/24 19:48:54 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 2;
	if (nb == 1)
		return (1);
	while ((sqrt * sqrt) <= nb && sqrt <= 46340)
	{
		if ((sqrt * sqrt) == nb)
		{
			return (sqrt);
		}
		sqrt++;
	}
	return (0);
}

// #include <stdio.h>

// int		ft_sqrt(int index);

// int		main(void)
// {
// 	printf("-10 = %d (0)\n", ft_sqrt(-10));
// 	printf("-1 = %d (0)\n", ft_sqrt(-1));
// 	printf(" 0 = %d (0)\n", ft_sqrt(0));
// 	printf(" 1 = %d (1)\n", ft_sqrt(1));
// 	printf(" 2 = %d (0)\n", ft_sqrt(2));
// 	printf(" 3 = %d (0)\n", ft_sqrt(3));
// 	printf(" 4 = %d (2)\n", ft_sqrt(4));
// 	printf(" 9 = %d (3)\n", ft_sqrt(9));
// 	printf(" 16 = %d (4)\n", ft_sqrt(16));
// 	printf(" 25 = %d (5)\n", ft_sqrt(25));
// }