/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:55:11 by ryesenia          #+#    #+#             */
/*   Updated: 2022/06/15 19:55:12 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*end;

	tmp = (unsigned char *)s;
	end = (unsigned char *)(s + n);
	while (tmp < end)
	{
		*tmp = c;
		tmp++;
	}
	return (s);
}
