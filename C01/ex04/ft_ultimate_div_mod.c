/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:24:15 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/11 15:19:58 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	remainder;

	if (*b != 0)
	{
		result = *a / *b;
		remainder = *a % *b;
		*a = result;
		*b = remainder;
	}
}
