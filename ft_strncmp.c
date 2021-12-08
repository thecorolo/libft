/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:34:47 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/08 04:04:06 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*b1;
	unsigned char	*b2;

	i = 0;
	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (b1[i] == b2[i] && i < n - 1 && (b1[i] && b2[i]))
	{
		i++;
	}
	return (b1[i] - b2[i]);
}
// int main()
// {
// 	char b[] = "anass2h";
// 	char c[] = "anass";
// 	printf("%d", ft_strncmp(b, c, 6));
// }
