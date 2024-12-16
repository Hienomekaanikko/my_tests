/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:32:28 by akuburas          #+#    #+#             */
/*   Updated: 2024/12/12 14:26:35 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	//int		fd;
	char	*line;

	//fd = open("just_newline.txt", O_RDONLY);
	line = get_next_line(0);
	while (line != NULL)
	{
		printf("%s\n", line);
		free(line);
		line = get_next_line(0);
	}
	//close(fd);
	return (0);
}
