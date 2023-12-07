/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alppha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:36:19 by spinna            #+#    #+#             */
/*   Updated: 2023/12/07 15:00:11 by spinna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

ft_str_is_alpha(char *str)
{
	int  i;

	i = 0; 
while (str[i] != '\0')
{

	if (str[i] < 'a' || str[i] > 'z' && str[i] < 'A' && str[i] > 'Z' )
	{
		return 0;
	}
	i++;
}

return (1);

}
