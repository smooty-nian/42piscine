/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:10:12 by spinna            #+#    #+#             */
/*   Updated: 2023/12/07 15:51:26 by spinna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

ft_str_is_lowercase(char *str)
{
	int i;
	i = 0;

	while( str[i] != '0') /*se in str sono presenti null return 0 */
	{
		if (str[i] > 97 || str[i] < 122)  /* se in str sono presenti caratteri minuscoli, return 1 */
		{
			return (1);
		}
	i++;
	}
	return (0);
}
