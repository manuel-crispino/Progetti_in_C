/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASCII.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispino <mcripsino@42.at>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:09 by mcrispino            #+#    #+#             */
/*   Updated:    time.    by                          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putc(char c){
   return write(1,&c,1);
};

void ft_print(int i ){
        ft_putc(' ');
        ft_putc('=');
        ft_putc(' ');
        if(i<=32){
            ft_putc('.');  // from 0 to 32 is not pritable ASCII character
        }
        else if(i==127){
            write(1,"DEL",3);
        }
        else { ft_putc(i);};
        ft_putc('\n');
}

void ft_print_ascii(void){
   int i = 0; 

    while(i <= 127){
        if(i<9){
        ft_putc(i + '0');
         ft_print(i);
        }
        else if(i>9 && i <= 99){
        ft_putc(i / 10 + '0');
        ft_putc(i % 10 + '0');
         ft_print(i);
        }
        else if(i >= 100){
            ft_putc(i / 100 + '0');
            ft_putc((i/10)%10+'0');
            ft_putc(i%10 + '0');
             ft_print(i);
        }
          i++;
    }
}  

int main (){
    ft_print_ascii();
    return 0; 
}