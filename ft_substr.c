/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 06:23:59 by mmoreira          #+#    #+#             */
/*   Updated: 2021/02/20 15:58:18 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;

	if (!(s))
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (!(temp = malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
	{
		*temp = '\0';
		return (temp);
	}
	ft_strlcpy(temp, (const char*)(s + start), len + 1);
	return (temp);
}
