/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:18:55 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/10 13:01:23 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			nchar;
	unsigned int	unb;

	unb = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		unb = nb * -1;
	}
	if (unb > 9)
	{
		ft_putnbr(unb / 10);
		ft_putnbr(unb % 10);
	}
	else
	{
		nchar = unb + '0';
		write(1, &nchar, 1);
	}
}
