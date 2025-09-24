/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammad <ahhammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:17:03 by ahhammad          #+#    #+#             */
/*   Updated: 2025/09/24 18:49:20 by ahhammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *p)
{
	int	i;

	i = 0;
	while (p[i] != '\0' && p[i] != '\n')
		i++;
	if (p[i] == '\n')
		return (i + 1);
	return (i);
}

char	*ft_strchr(char *s, int *len)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(ft_strlen(s) + 1);
	// printf("%d\n",ft_strlen(s));
	if (!p)
		return (NULL);
	while (s[i] != '\n' && s[i] != '\0')
	{
		p[i] = s[i];
		i++;
		(*len)++;
	}
	if (s[i] == '\n')
	{
		(*len)++;
		p[i] = '\n';
		i++;
	}
	if (i == 0)
		return (NULL);
	p[i] = '\0';
	return (p);
}

char	*free_mem(char *p, int i, int size)
{
	char	*temp;

	temp = p;
	free(p);
	if (i != size && i != 0)
	{
		// printf("hi\n");
		p = ft_substr(temp, i, size);
		free(temp);
		return (p);
	}
	return (NULL);
}

char	*ft_substr(char *s, unsigned int start, int len)
{
	char *sub;
	int i;

	if (!s)
		return (NULL);
	printf("hi");
	i = 0;
	//if (len < 0)
	//	return (0);

	// printf("len String = %lld\n",strlen(s));
	// printf("len after String = %d\n",len);

	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	// printf("Success %d == ",start);
	while (s[start] && i < len)
		sub[i++] = s[start++];
	// printf("%d  and i = %d\n", len, i);
	sub[i] = '\0';
	return (sub);
}
