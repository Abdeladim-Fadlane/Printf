/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:31:21 by afadlane          #+#    #+#             */
/*   Updated: 2022/11/05 17:34:20 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_hexalower(unsigned int n)
{
	unsigned int	a;
	unsigned int	r;
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
		ft_hexalower(n / 16);
	r = n % 16;
	if (r >= 10 && r < 16)
		ft_putchar(r + 87);
	else
		ft_putchar(r + 48);
	return (i);
}
