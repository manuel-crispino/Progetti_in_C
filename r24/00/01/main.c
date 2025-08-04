/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispino <mcripsino@42.at>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/9 18:42 by mcrispino             #+#    #+#             */
/*   Updated:    time.    by                          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putc(char c){
   return write(1,&c,1);
};

void ft_print_comb2(void){
   int i = 0; 

    while(i <= 99){
        int j = i+1;
     
        while(j <= 99){
             ft_putc(i / 10 + '0');
             ft_putc(i % 10 + '0');
             ft_putc(' ');
             ft_putc(j / 10 + '0');
             ft_putc(j % 10 + '0');
             if(!(i==98 && j==99)){
             write(1,", ",2);}
             j++;
        };
          i++;
    }
}  

int main (){
    ft_print_comb2();
    return 0; 
}