/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:45:29 by spinna            #+#    #+#             */
/*   Updated: 2023/12/03 14:09:51 by spinna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#includunistd.h>

void ft_putchar(char c)
{
    write(1, &c,1);
}


void ft_print_comb2()
{
    int a;

    a = 0;


    while(a <= 99)
    {
      ft_putchar(a + '0');

      if(a != 99)
      {
        ft_putchar(',');
      }  
      a++;
    }
ft_putchar('\n');
}

int main(void )
{
    ft_print_comb2();
    return (0);
    
}
