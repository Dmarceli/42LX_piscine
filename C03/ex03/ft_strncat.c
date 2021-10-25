/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:37:35 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/21 17:04:38 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*home;

	home = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb > 0)
	{
		*dest = *src;
		nb--;
		dest++;
		src++;
	}
	*dest = '\0';
	return (home);
}
