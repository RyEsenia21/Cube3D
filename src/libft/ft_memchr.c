/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:54:52 by ryesenia          #+#    #+#             */
/*   Updated: 2022/06/15 19:54:54 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	unsigned char	target;
	size_t			i;

	i = 0;
	tmp_s = (unsigned char *)s;
	target = (unsigned char)c;
	while (i < n)
	{
		if (*tmp_s == (unsigned char)target)
			return (tmp_s);
		tmp_s++;
		i++;
	}
	return (NULL);
}
