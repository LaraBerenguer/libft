/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 20:19:07 by larberen          #+#    #+#             */
/*   Updated: 2026/01/15 20:19:29 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//no variables globales
//si declaro variables en file de variable, static para ese file

//comando ar para generar librería, prohibido libtool
//libft.a debe crearse en la raiz del repo

#ifndef LIBFT_H
# define LIBFT_H

/****** Libraries ******/

# include <stddef.h>   //size_t
# include <unistd.h>   //write

/****** Part 1 ******/

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
int	ft_memcmp(void *s1, void *s2, size_t n);

#endif