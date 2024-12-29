/*
 * #include "libft/lib/libft.h"
 * #include "libft/gnl/get_next_line.h"
 * #include "libft/ftpf/src/ft_printf.h"
*/
// if the library is in a shared directory.
//  (-lm [/address/library.a] when compiling)
//  in my case [/usr/local/lib/libft.a] is where my library is stored
//  	*.h files are in [usr/local/include/]
#include <libft.h>
#include <ft_printf.h>
#include <get_next_line.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i = 0;

	printf("_____________________\n");
	if (argc || argv)
		;
	fd = open(argv[1], O_RDONLY);
	while ((i = get_next_line(fd, &line)) == 1)
	{
		printf("[%d] reading | \n", i);
		printf("%s\n", line);
	}
	if (i != 1)
	{
        if (i == 0)
			printf("[%d] done reading\n", i);
		else
			printf("[%d] ERROR\n", i);
		
	}
	close(fd);
	printf("_____________________\n");
	return (0);
}    
