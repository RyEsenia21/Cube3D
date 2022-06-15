/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:54:47 by ryesenia          #+#    #+#             */
/*   Updated: 2022/06/15 19:54:49 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*tmp_src;
	char	*tmp_dst;

	i = 0;
	tmp_src = (char *)src;
	tmp_dst = (char *)dst;
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		if ((unsigned char)tmp_src[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
