/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:57:46 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/23 17:11:11 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>

// int		ft_recursive_factorial(int nb);

// int		main(void)
// {
// 	printf("-6 = %d (0)\n", ft_recursive_factorial(-6));
// 	printf(" 0 = %d (1)\n", ft_recursive_factorial(0));
// 	printf(" 1 = %d (1)\n", ft_recursive_factorial(1));
// 	printf(" 2 = %d (2)\n", ft_recursive_factorial(2));
// 	printf(" 3 = %d (6)\n", ft_recursive_factorial(3));
// 	printf(" 4 = %d (24)\n", ft_recursive_factorial(4));
// }