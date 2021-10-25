/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:31:53 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/18 19:31:41 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97 && (str[i] <= 122)))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	char s[] = "AAA";
// 	ft_strupcase(s);
// 	printf("%s", s);
// 	return (0);
// }
