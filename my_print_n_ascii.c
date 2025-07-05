#include <stdio.h>
#include <unistd.h>

char print_char(ascii)
{
       write(1, ascii, 1);
       return 0;
}