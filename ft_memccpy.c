/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:06:35 by yuxu              #+#    #+#             */
/*   Updated: 2017/12/01 23:58:42 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst1;
	unsigned const char	*src1;
	int					i;

	dst1 = dst;
	src1 = src;
	i = 0;
	while (n--)
	{
		if (src1[i] == (unsigned char)c)
			return ((unsigned char*)dst1 + i + 1);
		dst1[i] = src1[i];
		i++;
	}
	return (NULL);
}
