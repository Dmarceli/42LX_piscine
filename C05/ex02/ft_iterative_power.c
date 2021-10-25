/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:12:00 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/24 19:54:12 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultado;

	i = 0;
	resultado = 1;
	if ((nb == 0 && power == 0))
		return (1);
	if ((nb == 0 || power < 0))
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		resultado = nb * resultado;
		i++;
	}
	return (resultado);
}

// #include <stdio.h>

// int ft_iterative_power(int nb, int power);
// int		main(void)
// {
// int nb =3;
// int power =3;
// 	printf("%d ^ %d= %d\n", nb, power, ft_iterative_power(nb, power));
// }