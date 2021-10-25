/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:30:08 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/23 16:56:24 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if ((nb == 1) || (nb == 0))
		return (1);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int		ft_iterative_factorial(int nb);

// int	main(void)
// {
// 	printf("-6 = %d (0)\n", ft_iterative_factorial(-6));
// 	printf(" 0 = %d (1)\n", ft_iterative_factorial(0));
// 	printf(" 1 = %d (1)\n", ft_iterative_factorial(1));
// 	printf(" 2 = %d (2)\n", ft_iterative_factorial(2));
// 	printf(" 3 = %d (6)\n", ft_iterative_factorial(3));
// 	printf(" 6 = %d (720)\n", ft_iterative_factorial(6));
// }
