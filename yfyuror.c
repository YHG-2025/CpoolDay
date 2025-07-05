#include "print_char.c"
void my_print_ascii(void){
    for(int i=33;i<127;i++){
        print_char(i);
        return 0;
    }
}
int main(void){
    my_print_ascii(void)
}