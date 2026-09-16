/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-say <mabu-say@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 14:34:12 by mabu-say          #+#    #+#             */
/*   Updated: 2026/09/13 15:37:01 by mabu-say         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	b;
	unsigned int	a;

	a = 0;
	while (dest[a])
		a++;
	b = 0;
	while (src[b] && b < nb)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest [a] = '\0';
	return (dest);
}
