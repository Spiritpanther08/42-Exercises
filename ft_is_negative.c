#include <unistd.h>

void ft_is_negative(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
}

//DID NOT make the rest as it would require working with inputs and such. 
