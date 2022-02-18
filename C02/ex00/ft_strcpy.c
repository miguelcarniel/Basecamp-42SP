/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:19:53 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/17 13:21:44 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char src[] = "01234567";
	char dest[] = "aaaaaaa";
	
	printf("O valor inicial de dest é: %s\n", dest);
	ft_strcpy(dest, src);	
	printf("O valor final de dest é: %s\n", dest);
	return (0);
}