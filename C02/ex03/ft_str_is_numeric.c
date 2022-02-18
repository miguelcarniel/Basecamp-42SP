/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:21:49 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/17 13:29:21 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	if (str[0] != '\0')
	{
		while (str[index] != '\0')
		{
			if (str[index] >= '0' && str[index] <= '9')
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
	char string [] = "12311---3123";
	
	printf("%d\n", ft_str_is_numeric(string));
	return (0);
}