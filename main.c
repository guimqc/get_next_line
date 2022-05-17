#include "get_next_line.h"

int main(void)
{
	int		fd = open("txt", O_RDONLY);

	get_next_line(fd);
}
