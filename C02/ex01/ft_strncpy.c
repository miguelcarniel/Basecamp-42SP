/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:20:37 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/17 13:24:49 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (cont < n && src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}

#include <stdio.h>
int main ()
{
	char src[]="123456";
	char dest[6];
	unsigned int n;

	n = 6;
	
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}