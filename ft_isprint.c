/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmediero <rmediero@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:28:55 by rmediero          #+#    #+#             */
/*   Updated: 2023/09/15 11:24:59 by rmediero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isprint (char caracter)
{
	if ((caracter >= 32 && caracter <= 126))
		return (1);
	else
		return (0);
}

/*int main (void)
{
	char c;

	c = 'A';	
	printf ("%i", ft_isprint(c));
	return (0);
}*/