/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuggulse <tuggulse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:25:16 by tuggulse          #+#    #+#             */
/*   Updated: 2022/10/08 16:21:24 by tuggulse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	len;

	srclen = ft_strlen(src);
	if (dstsize)
	{
		if (srclen >= dstsize)
			len = dstsize - 1;
		else
			len = srclen;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (srclen);
}
