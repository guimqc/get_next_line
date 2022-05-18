#include "get_next_line.h"

int main(void)
{
	int		fd = open("txt", O_RDONLY);
	char	*next_line;
	// int		i;

	// i  = 0;
	// while (i++ < 10)
	// {
	// 	next_line = get_next_line(fd);
	// 	printf("%s", next_line);
	// 	free(next_line);
	// }

	next_line = get_next_line(fd);
	printf("%s", next_line);
	free(next_line);
}
