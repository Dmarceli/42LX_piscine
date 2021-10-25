/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:38:02 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/16 18:14:39 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 97 && (str[i] <= 122)))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

// int main()
// {
// 	printf("%d",ft_str_is_lowercase("agarrate"));
// 	return (0);
// }