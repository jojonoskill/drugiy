#include "unistd.h"
#include "stdio.h"

void mx_write_knock_knock(void){
    char buf1[25] = "Follow the white rabbit.\n";
    char buf2[21] = "Knock, knock, Neo.\n";
    size_t nbytes1;
    size_t nbytes2;
    nbytes1 = strlen(buf1);
    nbytes2 = strlen(buf2);
    write(1, buf1, nbytes1);
    write(1, buf2, nbytes2);
}

int main(){
    mx_write_knock_knock();
}