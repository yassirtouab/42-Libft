/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:33:32 by ytouab            #+#    #+#             */
/*   Updated: 2021/10/07 02:17:09 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	start = 0;
	if (!s1)
		return (0);
	end = ft_strlen(s1);
	while (start < end && ft_isset(s1[start], set))
		start++;
	while (end > start && ft_isset(s1[end - 1], set))
		end--;
	ret = (char *)malloc((end - start + 1) * sizeof(char));
	if (!ret)
		return (0);
	while (start < end)
		ret[i++] = s1[start++];
	ret[i] = 0;
	return (ret);
}
