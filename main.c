/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:28:29 by marikhac          #+#    #+#             */
/*   Updated: 2024/07/31 17:36:22 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main()
{
	int arr[] = {8, 1, 2, 9, 6, 7, 4, -8, 4, 10};
	const int size = sizeof(arr) / sizeof(int);

	tree *bst = make_tree_from_array(arr, size);


	for (int i = 0; i <= 10; i++)
	{
		printf("%d : ", i);
		(search(bst, i) == NULL) ? printf("no\n") : printf("yes\n");
	}

	return 0;
}
