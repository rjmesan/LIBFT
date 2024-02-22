/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmediero <rmediero@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:26:40 by rmediero          #+#    #+#             */
/*   Updated: 2024/02/22 18:26:51 by rmediero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>

int ft_isalpha(int caracter);
int ft_isdigit(int caracter);
int ft_isalnum(int caracter);
int ft_isascii (int caracter);
int ft_isprint (char caracter);
int ft_strlen (char *str);

#endif