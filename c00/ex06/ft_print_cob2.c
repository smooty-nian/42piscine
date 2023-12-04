/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cob2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:55:49 by spinna            #+#    #+#             */
/*   Updated: 2023/12/04 14:56:12 by spinna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);

}



void ft_print_comb2()
{
 int a;
 int b;


 a = 0;
 while(a <= 98)
 {
    b = a + 1;
    while(b <= 99)
    {
        ft_putchar(a/ 10 + '0');
        ft_putchar(a % 10 + '0');
        ft_putchar(' ');
        ft_putchar(b / 10 + '0');
        ft_putchar(b % 10 + '0');

    if( b != 99 || a != 98 )
        {
        ft_putchar(',');
		ft_putchar(' ');
        }
     b++;
    }
    a++;
 }
 ft_putchar('\n');
}

int main(void)
{
    ft_print_comb2();
    return 0;

}

