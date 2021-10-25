/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:26:19 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/17 16:06:26 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || (str[i] > '9'))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

// int main()
// {
// 	printf("%d",ft_str_is_numeric("123"));
// 	return (0);
// }