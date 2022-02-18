/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:23:14 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/17 13:31:10 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	if (str[0] != '\0')
	{
		while (str[index] != '\0')
		{
			if (str[index] >= 'A' && str[index] <= 'Z')
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
	char string [] = "SHUIHDIAooooSUD";
	
	printf("%d\n", ft_str_is_uppercase(string));
	return (0);
}