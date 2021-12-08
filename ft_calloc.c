/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:41:42 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/08 03:59:23 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*b ;

	b = malloc(count * size);
	if (b == NULL)
		return (NULL);
	ft_bzero(b, count * size);
	return (b);
}
// int main()
// {
// 	int *test ;
// 	test = (int *)ft_calloc(5,sizeof(int));
// 	printf("%d", test[3]);
// }
