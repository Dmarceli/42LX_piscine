/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:10:43 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/18 16:09:08 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	print_hex(unsigned char c)
{
	int		h1;
	char	ch1;
	int		h2;
	char	ch2;

	h1 = c / 16;
	ch1 = ('0' + h1) * (h1 < 10) + ('a' - 10 + h1) * (h1 >= 10);
	write(1, &ch1, 1);
	h2 = c % 16;
	ch2 = ('0' + h2) * (h2 < 10) + ('a' - 10 + h2) * (h2 >= 10);
	write(1, &ch2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (ft_is_printable(*str))
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			print_hex(*str);
		}
		str++;
	}
}

/*
int main(void)
{
    char	*s;
	char	*p;

	s = "Oi\nvoce esta bem?";
	ft_putstr_non_printable(s);
	write(1, "\n", 1);
	p = "Food\tAce";
	ft_putstr_non_printable(p);
}
*/