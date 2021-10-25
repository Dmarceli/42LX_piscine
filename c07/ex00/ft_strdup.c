/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:24:19 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/25 15:30:40 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	p;

	p = 0;
	while (str[p])
		p++;
	return (p);
}

char	*ft_strdup(char *str)
{
	int		p;
	char	*str2;

	str2 = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	p = 0;
	while (str[p])
	{
		str2[p] = str[p];
		p++;
	}
	str2[p] = '\0';
	return (str2);
}

// #include <stdio.h>

// char *ft_strdup(char *src);

// int	main(void)
// {
// 	char *test;
// 	char *dup;

// 	test = "cona da mae do dekilio";
// 	printf("test = %s\n", test);
// 	dup = ft_strdup(test);
// 	printf("dup  = %s\n", dup);
// 	free(dup);
// }