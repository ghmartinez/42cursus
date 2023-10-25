/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfarina <pfarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:45:09 by pfarina           #+#    #+#             */
/*   Updated: 2022/03/03 16:20:14 by pfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = (char *) malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (ptr);
	ft_strlcpy(ptr, s1, (len + 1));
	return (ptr);
}
