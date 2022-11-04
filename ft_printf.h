/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:34:40 by afadlane          #+#    #+#             */
/*   Updated: 2022/11/04 18:31:35 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_printf_h
# define ft_printf_h
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int     ft_printf(const char *s, ...);
int     ft_putnbr(int n);
int     ft_putchar(char c);
int     ft_putstr(char *s);
int    ft_hexalower(unsigned int n);
int    ft_hexaupper(unsigned int n);

#endif