#include <unistd.h>
void print_char(char c)
{
    for (c=33;c>126;c++) {
        print_char(c);
    }
}
int main(void)
{
    print_char(67)
}