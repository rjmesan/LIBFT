/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmediero <rmediero@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:01:49 by rmediero          #+#    #+#             */
/*   Updated: 2023/09/18 12:15:29 by rmediero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp (char *s1, char *s2, int n)
{
	int cont;

	cont = 0;
	while (cont <= n)
	{
		if (s1[cont] == s2[cont])
		{
			return (0);
		}	
		else
		{
			return (s2 - s1);
		}
		cont++;
	}
	return (0);
}	

/*int main (void)
{
	int num;
	char *s1 = "Hola";
	char *s2 = "Hols";

	num = 5;
	printf ("%i", ft_strncmp(s1, s2, num));
	return (0);
}*/
