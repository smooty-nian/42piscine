/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:32:43 by spinna            #+#    #+#             */
/*   Updated: 2023/12/01 11:40:06 by spinna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char i;
	i = 122;

	while(i >= 97)
	{
		write(1, &i, 1);
		i--;

	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
