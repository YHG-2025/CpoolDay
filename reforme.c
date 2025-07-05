#include <stdio.h>
int main(int ac, char **av)
{
char str[] = "bienvenue à epitech !";
void my_char_replace()
{
    my_char_replace(str, 'e', 'a');
}

printf("%s\n", str);
return 0;
}