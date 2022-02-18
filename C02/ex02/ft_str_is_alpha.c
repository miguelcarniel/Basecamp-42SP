/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:21:10 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/17 13:28:19 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	if (str[0] != '\0')
	{
		while (str[index] != '\0')
		{
			if ((str[index] >= 'a' && str[index] <= 'z')
				|| (str[index] >= 'A' && str[index] <= 'Z'))
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
	char string [] = "sjdFFFFo";
	
	printf("%d\n", ft_str_is_alpha(string));
	return (0);
}