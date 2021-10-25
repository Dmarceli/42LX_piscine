/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:38:31 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/21 18:27:04 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i + k] != '\0' && str[i + k] == to_find[k])
		{
			if (to_find[k + 1] == '\0')
				return (&str[i]);
			++k;
		}
		++i;
	}
	return (0);
}
