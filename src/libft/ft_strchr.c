/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:55:44 by ryesenia          #+#    #+#             */
/*   Updated: 2022/06/15 19:55:45 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	while (1)
	{
		if (*ptr == (unsigned char)c)
			return ((char *)ptr);
		if (*ptr == '\0')
			break ;
		ptr++;
	}
	return (NULL);
}
