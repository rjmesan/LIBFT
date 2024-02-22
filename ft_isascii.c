/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmediero <rmediero@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:30:39 by rmediero          #+#    #+#             */
/*   Updated: 2024/02/22 17:09:56 by rmediero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_isascii (int caracter)
{
	if (caracter >= 0 && caracter <= 127)
		return (1);
	else
		return (0);
}

/*int main (void)
{
	char *c;

	c = "a";
	printf ("%i", ft_isascii(*c));
	return (0);
}*/
