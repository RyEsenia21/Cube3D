/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:50:43 by ryesenia          #+#    #+#             */
/*   Updated: 2022/06/15 19:50:45 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*k;

	k = malloc(count * size);
	if (NULL == k)
		return (NULL);
	ft_bzero((char *)k, count * size);
	return ((char *)k);
}
