/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 00:50:34 by azinbi-           #+#    #+#             */
/*   Updated: 2021/11/29 04:11:34 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

//  int main()
//  {
// 	int b =  1;
// 	//ft_memset("", 32, 4);
// 	// ft_memset(b, 255, 3);
// 	// ft_memset(b, 9, 2);
// 	ft_memset(&b, 256, 4);
// 	printf("%d", b);
//  }
