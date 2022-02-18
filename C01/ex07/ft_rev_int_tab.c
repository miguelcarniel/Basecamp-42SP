/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:04:04 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/14 14:56:02 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont_first;
	int	value_first;
	int	value_last;

	cont_first = 0;
	while (cont_first < size - 1)
	{
		value_first = tab[cont_first]; 
		value_last = tab[size - 1]; 
		tab[cont_first] = value_last; 
		tab[size - 1] = value_first;
		cont_first++;
		size--;
	}
}

#include <stdio.h>

int	main()
{
	int size;
	int tab [6];
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 6;
	
	size = 6;
	
	ft_rev_int_tab(tab, size);
	int n = 0;
	while (n < size)
	{
		printf("%d\n", tab[n]);
		n++;
	}
}