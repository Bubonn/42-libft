/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:08:59 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/29 14:51:22 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		strlen;
	char		*res;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	strlen = ft_strlen(s);
	if (start > strlen)
		return (ft_strdup(""));
	strlen = ft_strlen(s + start);
	if (strlen < len)
		len = strlen;
	res = (char *)malloc(sizeof(*res) * (len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
