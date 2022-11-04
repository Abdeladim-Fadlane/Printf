/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:53:16 by afadlane          #+#    #+#             */
/*   Updated: 2022/11/04 18:32:04 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"ft_printf.h"
int ft_hexaupper(unsigned int n)
{
    
    unsigned int r;
    
    if (n > 16)
        ft_hexaupper(n / 16);
    r = n % 16;
    if (r >= 10 && r < 16)
            ft_putchar(r + 55);
    else
        ft_putchar(r + 48);
    return 0;
} 