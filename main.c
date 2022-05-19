#include "get_next_line.h"

int main(void)
{
	char	*next_line;
	int		fd = open("txt", O_RDONLY);

	next_line = get_next_line(fd);
	printf("%s", next_line);
	free(next_line);

	next_line = get_next_line(fd);
	printf("%s", next_line);
	free(next_line);

	next_line = get_next_line(fd);
	printf("%s", next_line);
	free(next_line);

	next_line = get_next_line(fd);
	printf("%s", next_line);
	free(next_line);

	next_line = get_next_line(fd);
	printf("%s", next_line);
	free(next_line);
}
