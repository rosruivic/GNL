/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:33:26 by roruiz-v          #+#    #+#             */
/*   Updated: 2023/03/04 17:55:31 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *src)
{
	int	len;

	if (!src)
		return (0);
	len = 0;
	while (src[len])
		len++;
	return (len);
}

char	*ft_calloc(size_t len, size_t size)
{
	char		*ptr;
	size_t		i;

	ptr = malloc(len * sizeof(size));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

char	*ft_strchr(char *str, int lf)
{
	if (!str)
		return (NULL);
	while (*str && *str != lf)
		str++;
	if (*str == lf)
		return (str);
	return (NULL);
}
