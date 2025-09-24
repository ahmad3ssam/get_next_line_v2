/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammad <ahhammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:16:57 by ahhammad          #+#    #+#             */
/*   Updated: 2025/09/24 18:55:43 by ahhammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

char	*get_next_line(int fd)
{
	static char		*p;
	static int		file;
	static int		i;
	static size_t	read_f;
	char			*ptr;
	// static int		j = 0;
	// char			filename[7] = {'t', '0' + j, '.', 't', 'x', 't'};
	// int				fd1;

	i = 0;
	// printf("\nline in fun %d\n",i);
	if (fd <= 2 || BUFFER_SIZE <= 1)
		return (NULL);
	if (file != fd)
	{
		p = malloc(BUFFER_SIZE);
		if (!p)
			return (NULL);
		printf("hello");
		read_f = read(fd, p, BUFFER_SIZE - 1);
		if (!read_f)
		{
			free(p);
			return (NULL);
		}
		p[read_f] = '\0';
		file = fd;
	}
	
	ptr = ft_strchr(p, &i);
	// printf("index = %d\n", i);
	p = free_mem(p, i, read_f - i);
	// printf("%s  = hi\n",p);
	// if (ptr != NULL)
	// {
	// 	fd1 = open(filename, O_RDWR | O_CREAT, 0777);
	// 	// printf("%d'u' %s",ft_strlen(p),ptr);
	// 	write(fd1, ptr, strlen(ptr));
	// 	close(fd1);
	// }
	// j++;
	read_f = read_f - i;
	// printf("after read_f  = %lld\n",read_f);
	return (ptr);
}

// int	main(void)
// {
// 	int i = 0;
// 	int fd = open("ahmad.txt", O_RDONLY);

// 	while (i < 4)
// 	{
// 		// if(!fd1)
// 		// {
// 		//     printf("hi1");
// 		//     return(0);
// 		// }
// 		// sprintf(filename, "ahmad%d.txt", f);

// 		char *p = get_next_line(fd);
// 		// (void)p;
// 		printf("line %d %s\n",i,p);
// 		// int j=0;
// 		// while(p[j]!= '\0')
// 		// {

// 		//     write("%s",&p[j],1);
// 		//     j++;
// 		// }
// 		i++;
// 	}
// }