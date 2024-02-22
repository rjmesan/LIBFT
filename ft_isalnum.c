/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmediero <rmediero@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:25:58 by rmediero          #+#    #+#             */
/*   Updated: 2024/02/22 17:27:12 by rmediero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int caracter)
{
	if((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z') || (caracter >= '0' && caracter <= '9'))
		return (1);
	else
		return (0);
}

/*int main()
{
	char c1;
	char c2;

	c1 = '1';
	c2 = ',';	
	printf ("%i", ft_isalnum(c1));
	printf ("%i", ft_isalnum(c2));
	return (0);
}*/
