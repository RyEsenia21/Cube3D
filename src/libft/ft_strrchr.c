/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:56:21 by ryesenia          #+#    #+#             */
/*   Updated: 2022/06/15 19:56:23 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;

	tmp = s;
	while (*tmp != '\0')
		tmp++;
	if (c == '\0')
		return ((char *)tmp);
	while (tmp-- >= s)
	{
		if (*tmp == (unsigned char)c)
			return ((char *)tmp);
		if (tmp == s)
			return (NULL);
	}
	return (NULL);
}
