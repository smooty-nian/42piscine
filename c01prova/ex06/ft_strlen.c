/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:00:21 by spinna            #+#    #+#             */
/*   Updated: 2023/12/11 15:32:16 by spinna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;
	int	lenght;

	count = 0;
	lenght = 0;
	while (str[count] != '\0')
	{
		lenght++;
		count++;
	}
	return (count);
}
