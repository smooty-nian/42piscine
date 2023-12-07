/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:09:08 by spinna            #+#    #+#             */
/*   Updated: 2023/12/06 12:11:49 by spinna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numb(int a, int b, int c)
{
	ft_putchar (a + '0');
	ft_putchar (b + '0');
	ft_putchar (c + '0');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_numb (a, b, c);
				if (a != 7)
				{
					ft_putchar (',');
					ft_putchar (' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
