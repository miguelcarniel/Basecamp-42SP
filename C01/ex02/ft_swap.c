/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:18:34 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/14 14:20:26 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

#include <stdio.h>

int main ()
{
	int a = 2;
	int b = 5;
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
}