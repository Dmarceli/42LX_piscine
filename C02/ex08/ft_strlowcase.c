/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:27:44 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/18 19:29:06 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65 && (str[i] <= 90)))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	char s[] = "AGARRATE";
// 	ft_strlowcase(s);
// 	printf("%s", s);

// 	return (0);
// }
