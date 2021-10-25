/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:34:39 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/24 19:44:14 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{		
	int	i;
	int	k;

	i = 0;
	k = argc - 1;
	if (argc == 0)
		return (0);
	while (k >= 1)
	{
		i = 0;
		while (argv[k][i])
		{
			ft_print(argv[k][i]);
			i++;
		}
		k--;
		ft_print('\n');
	}
}
