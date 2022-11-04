/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:35:41 by afadlane          #+#    #+#             */
/*   Updated: 2022/11/04 18:45:45 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int ft_printf(const char *s, ...)
{
    int x = 0;
    int i = 0;
    va_list a;
    va_start(a,s);  
    while(s[i])
    {
        if(s[i] == '%')
         {
                if(s[i + 1] == 'c')
                     x += ft_putchar(va_arg(a, int));
                else if(s[i +1] == 's')
                     x += ft_putstr(va_arg(a, char*));
                else if(s[i +1] == 'd' ||  s[i +1] == 'i')
                     x += ft_putnbr(va_arg(a,int));
                else if(s[i + 1] == 'u')
                    x += ft_putnbr(va_arg(a,unsigned int));
                else if (s[i + 1] == 'x')
                    x += ft_hexalower(va_arg(a,unsigned int));
                 else if (s[i + 1] == 'X')
                    x += ft_hexaupper(va_arg(a,unsigned int));
                else if (s[i + 1] == 'p')
                     x += ft_putstr("0x") + ft_hexalower(va_arg(a,unsigned int));   
        } 
       
        i++;
        va_end(a);
    }  
    return x;
                                                   
}
// int main ()
// {
//     int i = 2;
//     ft_printf("%d",ft_printf("%d",i));
// }
