/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:29:18 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/26 16:52:34 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		return (0);
	}
	tab = (int *) malloc((max - min) * sizeof(int));
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
int		ft_ultimate_range(int **range, int min, int max);
void	test_ultimate_range_function(int min, int max);
void	print_test(int *test, int size);

// int		main(void)
// {
// 	test_ultimate_range_function(3, 5);
// 	test_ultimate_range_function(0, 11);
// 	test_ultimate_range_function(8, 2);
// 	test_ultimate_range_function(2, 2);
// 	test_ultimate_range_function(10, 20);
// 	test_ultimate_range_function(20, 15);
// 	test_ultimate_range_function(99, 99);
// 	test_ultimate_range_function(1, 12);
// }

// #include <stdio.h>
// void	test_ultimate_range_function(int min, int max)
// {
// 	int size;
// 	int *test;

// 	size = ft_ultimate_range(&test, min, max);cd
// 	printf("\nsize = %d\n", size);
// 	print_test(test, size);
// 	free(test);
// }

// void	print_test(int *test, int size)
// {
// 	int i;

// 	for (i = 0; i < size - 1; i++)
// 	{
// 		printf("%d - ", test[i]);
// 	}
// 	if (size > 0)
// 		printf("%d\n", test[size - 1]);
// }