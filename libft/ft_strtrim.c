/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfarina <pfarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:21:23 by pfarina           #+#    #+#             */
/*   Updated: 2022/03/09 18:23:05 by pfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;

	if (!*s1)
		return (ft_calloc(1, sizeof(s1)));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len_s1 = ft_strlen(s1);
	while (len_s1 && ft_strchr(set, s1[len_s1]))
		len_s1--;
	s1 = ft_substr((char *)s1, 0, (len_s1 + 1));
	if (!s1)
		return (ft_calloc(1, sizeof(s1)));
	return ((char *)s1);
}
