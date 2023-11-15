/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicalvez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:22:16 by vicalvez          #+#    #+#             */
/*   Updated: 2023/11/06 19:32:43 by vicalvez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	result = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			result = (char *)(s + i);
		i++;
	}
	if (c == 0)
		result = (char *)(s + i);
	return (result);
}
