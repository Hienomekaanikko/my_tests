/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:50:00 by msuokas           #+#    #+#             */
/*   Updated: 2024/12/12 11:26:44 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
	int fd = open("tester.txt", O_RDONLY);

	if (fd == -1)
		return (1);
	char *line;
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
		if (line == NULL)
			break;
	}
	close(fd);
	return (0);
}
