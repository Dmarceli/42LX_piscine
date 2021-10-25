/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:51:02 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/26 21:56:10 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = (int *) malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

// int main()
// {
// 	int *ptr;

// 	ptr = ft_range(0,7);
// 	for (int i = 0; i < 7; i++)
// 	{
// 		printf("%d\n", ptr[i]);
// 	}
// 	return 0;
// }