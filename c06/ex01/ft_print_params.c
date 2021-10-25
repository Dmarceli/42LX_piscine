/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:00:45 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/24 19:32:36 by dmarceli         ###   ########.fr       */
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

	k = 1;
	if (argc == 0)
		return (0);
	while (argc > 1)
	{
		i = 0;
		while (argv[k][i])
		{
			ft_print(argv[k][i]);
			i++;
		}
		k++;
		argc--;
		ft_print('\n');
	}
}
