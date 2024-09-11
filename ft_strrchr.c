/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:05:09 by cdawai            #+#    #+#             */
/*   Updated: 2024/08/14 15:55:36 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (i == 0 && str[i] != c)
			return (NULL);
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
