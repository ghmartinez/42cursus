/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfarina <pfarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:14:18 by pfarina           #+#    #+#             */
/*   Updated: 2022/03/05 17:46:13 by pfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	i2;
	char			*new_s;
	
	i = 0;
	i2 = 0;
	if (!*s1 && !*s2)
		return (0);
	new_s = (char *) malloc((sizeof(*s1) + sizeof(*s2)) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_s)
	{
		*new_s = '\0';
		return (new_s);
	}
//	if (s1[i] != '\0')
	while (s1[i] != '\0')
		{
			new_s[i] = s1[i];
			printf("new_s: %c, s1: %c\n", new_s[i], s1[i]);
			i++;
		}
//	if (s2[i2] != '\0')
		while (s2[i2] != '\0')
		{
			new_s[i] = s2[i2];
			printf("new_s: %c, s2: %c\n", new_s[i], s2[i2]);
			i++;
			i2++;
		}
	new_s[i] = '\0';
	return (new_s);
}

int	main()
{
	const char	*f1 = "";
	const char	*f2 = "";
	char		*res;

	res = ft_strjoin(f1, f2);
	printf("res: %s, size of res: %lu, content of res: %c\n", res, sizeof(res), *res);
}
