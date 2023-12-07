/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:09:33 by spinna            #+#    #+#             */
/*   Updated: 2023/12/07 14:35:34 by spinna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	int = 0;

	
		while (src[i] != '\0' && i < n)
		{
			src[i] = dest[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++ ;
		}
	return(dest);
}

