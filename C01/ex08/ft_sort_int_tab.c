/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 14:32:26 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/14 18:42:46 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	asc;
	int	k;

	i = 0;
	while (i < size)
	{
		k = i + 1;
		while (k < size)
		{
			if (tab[i] > tab[k])
			{
				asc = tab[i];
				tab[i] = tab[k];
				tab[k] = asc;
			}	
			k++;
		}
		i++;
	}
}
