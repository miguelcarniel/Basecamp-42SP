/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:22:39 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/17 13:30:13 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	if (str[0] != '\0')
	{
		while (str[index] != '\0')
		{
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				index++;
			}
			else
				return (0);
		}
	}
	return (1);
}
#include <stdio.h>
int main ()
{
	char string [] = "jasg45dasgd";
	
	printf("%d\n", ft_str_is_lowercase(string));
	return (0);
}