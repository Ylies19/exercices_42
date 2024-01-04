#include <unistd.h>


void ft_print_number( void )
{
    for (int i = '0' ; i <='9'; i++)
    {
        write(1, &i, 1);
    }
    

}