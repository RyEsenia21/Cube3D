/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <ryesenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:54:30 by ryesenia          #+#    #+#             */
/*   Updated: 2022/06/15 19:54:31 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*шагает по листу и применяет функцию f к каждому элементу списка.
Из результата применения функции создает новый список.
Применяет функцию del, если необходимо*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_element;
	t_list	*new_lst;

	if (!f)
		return (NULL);
	first_element = NULL;
	while (lst)
	{
		new_lst = ft_lstnew((*f)(lst -> content));
		if (!(new_lst))
		{
			while (first_element)
			{
				new_lst = first_element -> next;
				(*del)(first_element -> content);
				free(first_element);
				first_element = new_lst;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first_element, new_lst);
		lst = lst -> next;
	}
	return (first_element);
}
