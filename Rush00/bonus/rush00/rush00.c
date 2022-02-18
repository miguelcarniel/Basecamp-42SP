/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:41:11 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/06 21:47:40 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	if (x > 0)
	{
		ft_putchar('o');
		while ((x - 1) > 1)
		{
			ft_putchar('-');
			x--;
		}
		if (x > 1)
		{
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}

void	middle_lines(int x)
{
	ft_putchar('|');
	while ((x - 1) > 1)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	last_line(int x, int y)
{
	if (y > 1)
	{
		while (y > 2)
		{
			y--;
		}
		ft_putchar('o');
		while ((x - 1) > 1)
		{
			ft_putchar('-');
			x--;
		}
		if (x > 1)
		{
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		first_line(x);
		while (y > 2)
		{
			middle_lines(x);
			y--;
		}
		last_line(x, y);
	}
}
