/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmediero <rmediero@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:30:54 by rmediero          #+#    #+#             */
/*   Updated: 2023/09/12 11:38:17 by rmediero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int caracter)
{
	if (caracter >= '0' && caracter <= '9')
		return (1);
	else
		return (0);
}

/*int main()
{
	char c1;
	char c2;

	c1 = 'e';
	c2 = '1';
	printf ("%i", ft_isdigit(c1));
	printf ("%i", ft_isdigit(c2));
	return (0);
}*/

