/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicalvez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:58:55 by vicalvez          #+#    #+#             */
/*   Updated: 2023/11/08 12:45:12 by vicalvez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*dst;

	i = 0;
	s = (char *) src;
	dst = (char *) dest;
	if (!dst || !s)
		return (NULL);
	if (dst > s)
		while (n-- > 0)
			dst[n] = s[n];
	else
	{
		while (i < n)
		{
			dst[i] = s[i];
			i++;
		}
	}
	return (dest);
}
