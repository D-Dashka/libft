/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhyhorn <mrhyhorn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:25:11 by mrhyhorn          #+#    #+#             */
/*   Updated: 2021/11/04 21:17:02 by mrhyhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		cat;
	char		*new;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		new = ft_strdup(s2);
	if (s2 == NULL)
		new = ft_strdup(s1);
	new = ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new == NULL)
		return (NULL);
	new = ft_memcpy(new, s1, ft_strlen(s1));
	cat = ft_strlcat(new, s2, (ft_strlen(s1) + ft_strlen(s2) + 1));
	return (new);
}
