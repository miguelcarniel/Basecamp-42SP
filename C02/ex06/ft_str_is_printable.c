/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:23:46 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/17 13:33:29 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	if (str[0] != '\0')
	{
		while (str[index] != '\0')
		{
			if (str[index] >= 32 && str[index] <= 126)
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
	char string [] = "SHUIHDIA57SUsadaD";
	
	printf("%d\n", ft_str_is_printable(string));
	return (0);
}