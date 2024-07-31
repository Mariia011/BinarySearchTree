/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:46:33 by marikhac          #+#    #+#             */
/*   Updated: 2024/07/31 17:32:24 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

tree *make_tree()
{
	tree *new_tree;

	new_tree = malloc(sizeof(tree));
	new_tree->root = NULL;
	return new_tree;
}

tree *make_tree_from_array(int *arr, const int size)
{
	if (NULL == arr) return make_tree();
	
	size_t i = 0;
	tree *new_tree = make_tree();

	while (i < size)
	{
		insert_node(new_tree, arr[i++]);
	}
	return new_tree;
}
