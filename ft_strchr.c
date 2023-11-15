/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicalvez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:54:25 by vicalvez          #+#    #+#             */
/*   Updated: 2023/11/06 19:21:43 by vicalvez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			result = (char *)(s + i);
			return (result);
		}
		i++;
	}
	if (c == 0)
	{
		result = (char *)(s + i);
		return (result);
	}
	return (NULL);
}
