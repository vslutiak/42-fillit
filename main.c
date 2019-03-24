#include "fillit.h"

int main(int argc, char const *argv[])
{
	int fd;
	
	fd = open(argv[1], O_RDONLY);
	ft_vl(fd);

	return 0;
}