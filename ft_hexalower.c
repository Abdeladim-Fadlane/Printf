/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:31:21 by afadlane          #+#    #+#             */
/*   Updated: 2022/11/04 18:31:55 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
int ft_hexalower(unsigned int n)
{
    
    unsigned int r;
    
     if (n > 16)
        ft_hexalower(n/16);
    r = n % 16;
      if (r >= 10 && r < 16)
            ft_putchar(r + 87);
      else
        ft_putchar(r + 48);
      return(0);
} 