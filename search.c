/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:39:01 by marikhac          #+#    #+#             */
/*   Updated: 2024/07/31 17:36:39 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static tree_node *__search__(tree_node *root, int val)
{
 	if(NULL == root || val == root->val)
		return root;
	if(val > root->val)
		return(__search__(root->right, val));
	else
		return(__search__(root->left, val));
}

tree_node *search(tree *bst, int val)
{
	return(__search__(bst->root, val));
}
