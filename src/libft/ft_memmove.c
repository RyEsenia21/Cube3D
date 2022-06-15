/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:55:05 by ryesenia          #+#    #+#             */
/*   Updated: 2022/06/15 19:55:07 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	i = 0;
	if (dst || src)
	{
		tmp_dst = (char *)dst;
		tmp_src = (char *)src;
		if (tmp_src > tmp_dst)
		{
			ft_memcpy(dst, src, len);
		}
		else
		{
			while (len--)
				tmp_dst[len] = tmp_src[len];
		}
	}
	return (dst);
}
