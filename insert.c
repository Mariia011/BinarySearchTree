/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:58:02 by marikhac          #+#    #+#             */
/*   Updated: 2024/07/31 17:13:33 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	__insert_node__(tree_node **root, int val)
{
	if (NULL == *root)
		*root = make_node(val);
	else if (val < (*root)->val)
		__insert_node__(&((*root)->left), val);
	else if (val > (*root)->val)
		__insert_node__(&((*root)->right), val);
}

void	insert_node(tree *bst, int val)
{
	__insert_node__(&bst->root, val);
}
