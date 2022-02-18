/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:25:52 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/17 13:36:14 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

int	is_letter(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	is_number(char n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{	
		if (is_letter(str[index]) || is_number(str[index]))
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] -= 32;
			index++;
			while (is_letter(str[index]) || is_number(str[index]))
			{
				if (str[index] >= 'A' && str[index] <= 'Z')
					str[index] += 32;
				index++;
			}
		}
		index ++;
	}
	return (str);
}
#include <stdio.h>

int	main(void)
{
	char str[] = "oi, tudo bem? 42palavras quarenta-e-dois; cinquenta+e+um";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}