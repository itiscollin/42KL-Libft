/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 05:07:26 by cdawai            #+#    #+#             */
/*   Updated: 2024/08/16 07:56:19 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;
	size_t	total_size;

	total_size = count * size;
	if (count == 0 || size == 0)
		return (malloc(1));
	if (total_size == 0 || total_size / count != size)
		return (NULL);
	pointer = malloc(total_size);
	if (!pointer)
		return (NULL);
	ft_memset(pointer, 0, total_size);
	return (pointer);
}
