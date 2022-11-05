/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:18:54 by afadlane          #+#    #+#             */
/*   Updated: 2022/11/05 18:11:08 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_ptr(unsigned long n)
{
	unsigned long	a;
	unsigned long	r;
	int				i;

	a = n;
	i = 0;
	if (a == 0)
	i++;
	while (a != 0)
	{
		a = a / 16;
		i++;
	}
	if (n > 15)
		ft_ptr(n / 16);
		r = n % 16;
	if (r >= 10 && r < 16)
		ft_putchar(r + 87);
	else
		ft_putchar(r + 48);
	return (i);
}
