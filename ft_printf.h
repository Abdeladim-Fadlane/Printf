/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:34:40 by afadlane          #+#    #+#             */
/*   Updated: 2022/11/05 14:53:37 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putnbr(long n);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_hexalower(unsigned int n);
int	ft_hexaupper(unsigned int n);
int	ft_ptr(unsigned long n);
#endif
