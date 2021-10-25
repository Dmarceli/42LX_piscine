/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:17:58 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/18 13:32:00 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!((int)str[i] >= 65 && ((int)str[i] <= 90)))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

// int main()
// {
// 	int c = ft_str_is_uppercase("SA");
// 	printf("%d",c);
// 	return (0);
// }