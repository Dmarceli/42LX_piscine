/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:04:00 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/25 11:04:03 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			break ;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	swap(char **xp, char **yp)
{
	char	*temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void	bubbleSort(char *arr[], int init, int n)
{
	int	i;
	int	j;

	i = init;
	while (i < n - 1)
	{
		j = init;
		while (j < n - i - 1)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
				swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	bubbleSort(argv, 1, argc + 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
