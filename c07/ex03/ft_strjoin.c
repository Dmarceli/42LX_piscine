/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:25:39 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/26 11:25:43 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	join_separation(char **joined_str_ptr, char *sep)
{
	while (*sep)
	{
		**joined_str_ptr = *sep;
		sep++;
		*joined_str_ptr += 1;
	}
}

void	makeconcat(int size, char *joined_str_ptr, char **strs, char *sep)
{
	int	n;
	int	i;

	n = 0;
	while (n < size)
	{
		i = 0;
		while (strs[n][i])
		{
			*joined_str_ptr = strs[n][i];
			joined_str_ptr++;
			i++;
		}
		if (n == size - 1)
			*joined_str_ptr = 0;
		else if (*sep)
			join_separation(&joined_str_ptr, sep);
		n++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	char	*joined_str_ptr;
	int		char_number;
	int		concat_size;

	concat_size = (str_len(sep) - 1) * (size - 1);
	if (size)
	{
		char_number = (strs[size - 1] - *strs) + str_len(strs[size - 1]) + 1;
		concat = (char *)malloc(char_number + concat_size);
	}
	else
	{
		concat = malloc(1);
		*concat = 0;
		return (concat);
	}
	joined_str_ptr = concat;
	makeconcat(size, joined_str_ptr, strs, sep);
	return (concat);
}

// int main()
// {
// 	char *sep;
// 	sep = "-";
// 	char *strs[5];
// 	strs[0] = "one";
// 	strs[1] = "two";
// 	strs[2] = "three";
// 	strs[3] = "four";
// 	strs[4] = "five";
// 	printf("%s\n", ft_strjoin(5, strs, sep));
// 	return 0;
// }