/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vslutiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:02:46 by vslutiak          #+#    #+#             */
/*   Updated: 2018/11/12 18:13:36 by vslutiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "stdio.h"

int	ft_line(char *map)
{
	int col;
	int i;

	i = 0;
	col = 0;
	while (map[i])
	{
		if (map[i] != '\n')
			col++;
		if (map[i] != '\n' && map[i] != '.' && map[i] != '#')
			return (0);
		i++;
	}
	if (col % 16 == 0)
		return (1);
	return (0);
}

int	ft_valid(int len, char *map)
{
	int	i;
	int	b;
	int count;

	i = 0;
	b = 1;
	count = 0;
	while (i < len && b <= 20)
	{
		if (map[i] == '#' && b > 1 && map[i - 1] == '#')
			++count;
	 	if (map[i] == '#' && b < 19 && map[i + 1] == '#') 
			++count;
		if (map[i] == '#' && b > 5 && map[i - 5] == '#')
			 ++count;
		if (map[i] == '#' && b < 15 && map[i + 5] == '#') 
			++count;
		if (b == 20)
		{
			if (count != 6 && count != 8)
				return (0);
			b = 0;
			count = 0;
			++i;
		}
		i++;
		b++;
	}
	i = 0;
	b = 0;
	count = 0;
	while (i < len)
	{
		if (map[i] == '#')
			count++;
		if (b == 20)
		{
			if (coll != 4)
				return (0);
			b = 0;
			count = 0;
			i++;
		}
		i++;
		b++;
	}
	return (1);
}

int main(int argc, char const *argv[])
{
	int		len;
	int		fd;
	char	buffer[MAX + 1];
	char	*map;

	fd = open(argv[1], O_RDONLY);
	len = read(fd, buffer, MAX);
	buffer[len] = '\0';
	map = ft_strndup(buffer, len);
	//printf("%s\n", map);
	if (ft_valid(len, map) != 1)
		write(2, "EROR", 4);
	close(fd);
	return (1);
}
 	

