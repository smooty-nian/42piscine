/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:31:33 by spinna            #+#    #+#             */
/*   Updated: 2023/12/03 14:36:37 by spinna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_is_negative(int n)
{
	if(n < 0)
	{
		write(1, "N",1);
	}
	else
	{
		write(1, "P", 1);
	}

}
