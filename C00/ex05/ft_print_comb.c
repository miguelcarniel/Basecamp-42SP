/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:58:57 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/09 19:02:18 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char c);
void	ft_put(char num1, char num2, char num3);

void	check_numeros(char num1, char num2, char num3)
{
	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			while (num3 <= '9')
			{
				if (num2 < num3 && num1 < num2)
				{
					ft_putchar(num1);
					ft_putchar(num2);
					ft_putchar(num3);
					ft_put(num1, num2, num3);
				}
				num3++;
			}
			num3 = '0';
			num2++;
		}
		num2 = '0';
		num3 = '0';
		num1++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put(char num1, char num2, char num3)
{
	if (num1 == '7' && num2 == '8' && num3 == '9')
	{
		return ;
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	check_numeros(num1, num2, num3);
	return ;
}
