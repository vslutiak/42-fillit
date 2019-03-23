#include "fillit.h"

int		ft_len(char *map)
{
	char	*buffer;

	buffer = map;
	while (*map && *map != '\n')
		++map;
	return (map - buffer);
}

int	ft_empty(char *map, int len, int str)
{
	while (*map && str--)
	{
		if (*map == '\n')
			return (1);
		if (*map == '#')
			return (0);
		map += len + 1;
	}
	return (1);
}

int	count_line(char *map)
{
	int		i;

	i = 0;
	while (*map)
	{
		if (*map == '\n')
			i++;
		if (*map == '\n' && *(map + 1) == '\n')
			return (i);
		map++;
	}
	return (i);
}

void	del_emp(char *maps)
{
	while (*maps)
		if ((ft_strncmp(maps, "....\n", 5)) == 0)
			ft_memmove(maps, maps + 5, ft_strlen(maps + 4));
		else
			++maps;
}

void	ft_del(char *maps, int len, int str)
{
	while (str-- && ft_memmove(maps, maps + 1, ft_strlen(maps)))
		maps += len;
}

void		ft_tream(char *maps)
{
	int		len;
	int		str;
	int		col;

	del_emp(maps);
	while (*maps)
	{
		len = ft_len(maps);
		str = count_line(maps);
		col = len;
		while (col--)
		{
			if (ft_empty(maps, len, str))
			{
				ft_del(maps, len, str);
				--len;
			}
			if (ft_empty(maps + (len - 1), len, str))
			{
				ft_del(maps + (len - 1), len, str);
				--len;
			}
		}
		maps += ((len + 1) * str) + 1;
	}
	maps[ft_strlen(maps) - 1] = '\0';
}