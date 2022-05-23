#include "get_next_line.h"

int main(void)
{
	int		fd = open("txt", O_RDONLY);
	int		fd2 = open("txt2", O_RDONLY);
	int		fd3 = open("txt3", O_RDONLY);

	int		i = 0;
	int		j = 0;

	char	*next_line = NULL;

	while (j++ < 5)
	{
		while (i < 3)
		{
			if (i == 0)
			next_line = get_next_line(fd);
			else if (i == 1)
				next_line = get_next_line(fd2);
			else if (i == 2)
				next_line = get_next_line(fd3);
			printf("%s", next_line);
			free(next_line);
			i++;
		}
		i = 0;
	}
}
