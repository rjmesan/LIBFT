/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba_isalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmediero <rmediero@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:28:04 by rmediero          #+#    #+#             */
/*   Updated: 2024/02/22 17:23:40 by rmediero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int caracter)
{
	if ((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z'))
		return (1);
	else
		return (0);
}

/*int main()
{
	char c1;
	char c2;

	c1 = '1';
	c2 = 'a';	
	printf ("%i", ft_isalpha(c1));
	printf ("%i", ft_isalpha(c2));
	return (0);
}*/

