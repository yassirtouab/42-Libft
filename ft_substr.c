/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:40:24 by ytouab            #+#    #+#             */
/*   Updated: 2021/10/07 00:49:34 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	x;
	size_t	l;

	i = start;
	x = 0;
	if (!s)
		return (0);
	l = ft_strlen(s);
	if (len > l)
		len = l;
	ret = (char *)malloc((len + 1) * sizeof(char));
	if (!ret)
		return (0);
	while (i < l && x < len)
		ret[x++] = s[i++];
	ret[x] = 0;
	return (ret);
}
