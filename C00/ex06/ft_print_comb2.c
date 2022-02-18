/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:47:39 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/10 14:55:59 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char a, char b, char c, char d);
void	ft_put(char c);
void	check_n_print(int A, int B, int C, int D);
void	test(int A, int B, int C, int D);

void	test(int A, int B, int C, int D)
{
	while (C <= 9)
	{
		while (D <= 9)
		{
			check_n_print(A, B, C, D);
			D++;
		}
		C++;
		D = 0;
	}
}

void	check_n_print(int A, int B, int C, int D)
{
	int	x;
	int	y;

	x = A * 100 + B;
	y = C * 100 + D;
	if (x < y)
		ft_putchar(A + 48, B + 48, C + 48, D + 48);
}

void	ft_putchar(char A, char B, char C, char D)
{
	write(1, &A, 1);
	write(1, &B, 1);
	ft_put(' ');
	write(1, &C, 1);
	write(1, &D, 1);
	if (A == '9' && B == '8' && C == '9' && D == '9')
		return ;
	else
	{
		ft_put(',');
		ft_put(' ');
	}
}

void	ft_put(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	numbers[4];

	numbers[0] = 0;
	numbers[1] = 0;
	numbers[2] = 0;
	numbers[3] = 1;
	while (numbers[0] <= 9)
	{
		while (numbers[1] <= 9)
		{
			test(numbers[0], numbers[1], numbers[2], numbers[3]);
			numbers[1]++;
			numbers[2] = numbers[0];
			numbers[3] = numbers[1] + 1;
		}
		numbers[0]++;
		numbers[1] = 0;
		numbers[2] = numbers[0];
		numbers[3] = numbers[1] + 1;
	}
}
