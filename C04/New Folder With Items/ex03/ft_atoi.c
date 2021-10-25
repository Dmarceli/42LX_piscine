/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:16:11 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/22 14:21:25 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	neg;

	i = 0;
	neg = 1;
	nb = 0;
	while (str[i] == '\f' || str[i] == '\r' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\t' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * neg);
}
// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%d", ft_atoi(argv[1]));
// }