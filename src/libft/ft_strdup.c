/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:55:52 by ryesenia          #+#    #+#             */
/*   Updated: 2022/06/15 19:55:53 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	dstsize;
	size_t	i;

	i = 0;
	dstsize = (ft_strlen(s1) + 1) * (sizeof(const char));
	dst = malloc(dstsize);
	if (dst == NULL)
		return (NULL);
	while (i < dstsize)
	{
		dst[i] = s1[i];
		i++;
	}
	return ((char *)dst);
}
