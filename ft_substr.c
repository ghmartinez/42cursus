/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfarina <pfarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:23:00 by pfarina           #+#    #+#             */
/*   Updated: 2022/03/09 19:21:22 by pfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*new_s;

	i = 0;
	if (!*s)
		return (NULL);
	if (start > ft_strlen(s))
	{	
		new_s = (char *) malloc(sizeof(*s) * 1);
		if (!new_s)
			return (NULL);
		new_s[i] = '\0';
		return (new_s);
	}
	new_s = (char *) malloc(sizeof(*s) * (len + 1));
	if (!new_s)
		return (NULL);
	while (start < ft_strlen(s) && i < len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
