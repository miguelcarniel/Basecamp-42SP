/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:31:41 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/14 14:40:14 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
}
int	main()
{
	char str[6];
	str[0] = 'M';
	str[1] = 'I';
	str[2] = 'G';
	str[3] = 'U';
	str[4] = 'E';
	str[5] = 'L';

	ft_putstr(str);
}
