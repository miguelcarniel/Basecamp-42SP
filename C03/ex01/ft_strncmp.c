/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:29:15 by mcarniel          #+#    #+#             */
/*   Updated: 2022/02/18 02:41:20 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			aux;

	i = 0;
	aux = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		aux = s1[i] - s2[i];
		if (s1[i] != s2[i])
			return (aux);
		i++;
	}
	return (aux);
}
