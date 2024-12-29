//#include "libft/lib/libft.h"
// if the library is in a shared directory.
//  (-lm [/address/library.a] when compiling)
#include <libft.h>
//Compilation instructions are in the libft README

int     main()
{
    char    *str = "hello, again\n";
    write(1, str, 14);
    ft_putstr(str);
    
}