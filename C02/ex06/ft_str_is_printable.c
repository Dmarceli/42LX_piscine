/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:44:58 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/18 15:01:23 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (((int)str[i] < 32))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

// int main()
// {
// 	char	c[] = "dani";
// 	printf("%d", ft_str_is_printable(c));
// 	return (0);
// }