/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:54:36 by ryesenia          #+#    #+#             */
/*   Updated: 2022/06/15 19:54:38 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*добавляет элемент в конец списка*/

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew_element;

	lstnew_element = (t_list *)malloc(sizeof(t_list));
	if (lstnew_element == NULL)
		return (NULL);
	lstnew_element -> content = content;
	lstnew_element -> next = NULL;
	return (lstnew_element);
}
