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

int	ft_new_line(char *map, int len)
{
	int	i;
	int	b;

	i = 4;
	b = 0;
	while (i < len)
	{
		while (++b <= 3)
			if (map[i] == '\n')
				i += 5;
			else
				return (0);
		b = 0;
		if (!((map[len - 1] == '\n' && map[len - 2] == '\n') &&
			(map[len - 3] == '#' || map[len - 3] == '.')))
			return (0);
		if (map[i] == '\n' && map[i + 1] == '\n'
			&& map[i + 2] == '\0' && i + 2 != len)
			return (0);
		if (map[i] == '\n' && map[i + 1] == '\n')
			i += 6;
		else if (map[i] == '\n' && map[i + 1] == '\0')
			break ;
		else
			return (0);
	}
	return (1);
}

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
	return (1);
}

int	ft_count(char *map, int len)
{
	int i;
	int b;
	int count;

	i = 0;
	b = 1;
	count = 0;
	if (!map[i])
		return (0);
	while (i < len)
	{
		if (map[i] == '#')
			count++;
		if (b == 20)
		{
			if (count != 4)
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

int	main(int argc, char const *argv[])
{
	int		len;
	int		fd;
	char	buffer[MAX + 1];
	char	*map;

	fd = open(argv[1], O_RDONLY);
	len = read(fd, buffer, MAX);
	buffer[len] = '\0';
	map = ft_strsub(buffer, 0, len);
	//printf("%s", map);
	if (ft_valid(len, map) != 1)
		write(2, "EROR\n", 5);
	else if (ft_line(map) != 1)
		write(2, "LINE\n", 5);
	else if (ft_new_line(map, len) != 1)
		write(2, "NEW\n", 4);
	else if (ft_count(map, len) != 1)
		write(2, "COUNT\n", 6);
	else
		write(2, "VALID\n", 6);
	ft_tream(map);
	printf("%s", map);
	close(fd);
	return (1);
}
