/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexsrch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:53:01 by ryesenia          #+#    #+#             */
/*   Updated: 2022/06/15 19:53:04 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_indexsrch(const char *s, int c)
{
	const char	*tmp;
	int			index;

	tmp = s;
	index = 0;
	while (*tmp != '\0')
	{
		if (tmp[index] == (unsigned char)c)
			return (index);
		index++;
	}
	return (0);
}
