/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:06:08 by spinna            #+#    #+#             */
/*   Updated: 2023/12/12 12:10:24 by spinna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;
	
	j = 0; 
	i = 0;
	while(dest[i] != '\0')
		i++;
	while(src[j] && j < nb)
	{
		dest[i+j] = src[j];
		j++;
	}
	dest[i+j] = '\0';
	return (dest);
}	
