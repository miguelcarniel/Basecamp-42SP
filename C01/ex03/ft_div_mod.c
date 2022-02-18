/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:45:07 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/14 14:23:45 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	result;
	int	remainder;

	if (b != 0)
	{
		result = a / b;
		remainder = a % b;
		*div = result;
		*mod = remainder;
	}
}
#include <stdio.h>

int main()
{
	int a = 13;
	int b = 3;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d\n", div, mod);
}