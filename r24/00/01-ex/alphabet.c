/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispino <mcripsino@42.at>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/5 9:42 by mcrispino              #+#    #+#             */
/*   Updated:    time.    by                          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putc (char c){
return write(2,&c,1);
}

void ft_print_alphabet (void){
char alphabet = 'a';
while(alphabet <= 'z'){
   ft_putc(alphabet); 
   alphabet++;
}
}

int main(void) {
    ft_print_alphabet();
    return 0;
}