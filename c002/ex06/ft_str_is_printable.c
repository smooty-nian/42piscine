/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:58:31 by spinna            #+#    #+#             */
/*   Updated: 2023/12/17 16:00:26 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_printable(char *str)
{
	int i;
	i = 0;

	while( str[i] != '\0')
	{
		if(str[i] > 32 && str[i] < 127)
		{
			i++;
		}
		else
		{
			return 0;
		}
	i++;
	}
return 1;
}
