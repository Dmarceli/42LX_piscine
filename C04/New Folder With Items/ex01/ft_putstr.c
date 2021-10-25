/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:12:50 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/23 12:14:09 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

// #include <stdio.h>

// void	ft_putstr(char *str);

// int		main(void)
// {
// 	char str[] = "Hello, i'm dani!\n";
// 	char *p_str;

// 	p_str = str;
// 	ft_putstr(p_str);
// }