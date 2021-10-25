/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:38:10 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/13 14:37:34 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	z;

	i = 0;
	x = size - 1;
	while (i < x)
	{
		z = tab[i];
		tab[i] = tab[x];
		tab[x] = z;
		i++;
		x--;
	}
}
