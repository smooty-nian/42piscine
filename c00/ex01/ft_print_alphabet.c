/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:40:24 by spinna            #+#    #+#             */
/*   Updated: 2023/12/01 11:31:27 by spinna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char i;
	i = 97;

	while(i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}	

	int main(void)
	{
		ft_print_alphabet();
		return (0);
	}
	
