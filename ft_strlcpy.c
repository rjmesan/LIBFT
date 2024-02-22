/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmediero <rmediero@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:14:08 by rmediero          #+#    #+#             */
/*   Updated: 2024/02/22 18:14:14 by rmediero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy (char *dest, char *str, size_t len_str)
{
    size_t i;

    i = 0;
    while (i < len_str)
    {
        dest[i] = str[i];
        i++;
    }
    return (i);
}

int main (void)
{
    char *s = "Hola";
    char d[8];
    int len;

    len = 3;
    printf ("%zu", ft_strlcpy(d, s, len));
    
    return (0);
}
