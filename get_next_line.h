/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammad <ahhammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:19:11 by ahhammad          #+#    #+#             */
/*   Updated: 2025/09/24 17:19:12 by ahhammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

char	*get_next_line(int fd);
// char *get_next_line_utils(char *p,int rows);
char	*ft_strchr(char *c, int *len);
char	*free_mem(char *p, int i, int size);
int		ft_strlen(char *p);
char	*ft_substr(char *s, unsigned int start, int len);

#endif