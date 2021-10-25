/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:46:28 by dmarceli          #+#    #+#             */
/*   Updated: 2021/08/18 13:27:16 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		if (str[i] > 96 && str[i] < 123)
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else
			{
				if (!((str[i - 1] > 47 && str[i - 1] < 58)
						|| (str[i - 1] > 96 && str[i - 1] < 123)
						|| (str[i - 1] > 64 && str[i - 1] < 91)))
					str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	char s[] = "Oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
// 	printf("%s", ft_strcapitalize(s));
// }
