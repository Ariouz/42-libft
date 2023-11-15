/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicalvez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:05:26 by vicalvez          #+#    #+#             */
/*   Updated: 2023/11/07 23:41:34 by vicalvez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen((char *)s1);
	while (*(unsigned char *)(s1 + i) &&
		ft_strchr(set, *(unsigned char *)(s1 + i)) != NULL)
	{
		i++;
	}
	len -= i;
	result = ft_substr(s1, i, len);
	while (result[len - 2] && ft_strchr(set, result[len - 2]) != NULL)
	{
		result[len - 2] = 0;
		len--;
	}
	return (result);
}
