/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:16:55 by spinna            #+#    #+#             */
/*   Updated: 2023/12/06 16:24:40 by spinna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar (char c)
	{
		write (1, &c, 1);
	}

void	ft_div_mod (int a, int b, int *div, int *mov)
	{
		*div = a / b + '0';
		*mov = a % b + '0';
	}


int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        write(1, "Usage: ./a.out <num1> <num2>\n", 29);
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int div_result, mod_result;

    ft_div_mod(num1, num2, &div_result, &mod_result);

    write(1, "Division result: ", 18);
    ft_putchar(div_result);
    write(1, "\n", 1);

    write(1, "Modulo result: ", 16);
    ft_putchar(mod_result);
    write(1, "\n", 1);

    return 0;
}
