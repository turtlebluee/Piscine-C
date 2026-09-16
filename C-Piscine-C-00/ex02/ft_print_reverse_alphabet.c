/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabu-say <mabu-say@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 16:59:57 by mabu-say          #+#    #+#             */
/*   Updated: 2026/08/29 17:20:29 by mabu-say         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	gerialpha;

	gerialpha = 'z';
	while (gerialpha >= 'a')
	{
		write(1, &gerialpha, 1);
		gerialpha--;
	}
}
