#include <stdlib.h>
#include "./mx_printchar.c"

void mx_hexadecimal(void){
    for(int i = 0;i<16;i++){
        if(i<10) mx_printchar(i +'0');
        else mx_printchar(i+55);
    }
}

int main(){
    mx_hexadecimal();
    return 0;
}